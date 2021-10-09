/*
 * main2.cpp for CPTR 245 Lab 13 on libraries and versions
 *
 * g++ main.cpp -ldl && ./a.out main.cpp
 */

#include <dlfcn.h>    // dlopen(), dlsym(), and dlclose()
#include <fstream>    // std::ifstream
#include <iomanip>    // std::setfill, std::setw
#include <iostream>   // std::cout, std::endl
#include <sys/stat.h> // stat() to get file size
#include <string>

#define OPENSSL_VERSION 0
#define MD5_DIGEST_LENGTH 16

int main(int argc, char *argv[]) {
  // verify proper command-line arguments
  if (argc < 2) {
    std::cerr << "USAGE: ./a.out FILEPATH" << std::endl;
    exit(1);
  }

  std::cout << "Select a library: (1) OS, or (2) Custom: ";
  int choice;
  std::cin >> choice;
  std::string path;
  if (choice == 1) {
    path = "/usr/lib/x86_64-linux-gnu/libcrypto.so.1.1";
  } else if (choice == 2) {
    path = "./libcrypto.so";
  }
  // load a dynamic library into memory
  void *cryptoLib = dlopen(path.c_str(), RTLD_LAZY);
  if (!cryptoLib) {
    std::cerr << dlerror() << std::endl;
    exit(1);
  }

  // look for a function in the library
  typedef const char *(*OpenSSL_version_t)(int type);
  OpenSSL_version_t OpenSSL_version;
  char *error;
  OpenSSL_version = (OpenSSL_version_t)dlsym(cryptoLib, "OpenSSL_version");
  if ((error = dlerror()) != NULL) {
    std::cerr << error << std::endl;
    dlclose(cryptoLib);
    exit(1);
  }

  // print version found in library
  std::cout << "SSL Library Version: " << OpenSSL_version(OPENSSL_VERSION)
            << std::endl;

  // get file size
  struct stat statbuf;
  if (stat(argv[1], &statbuf) < 0) {
    std::cerr << "Unable to get info on the file" << std::endl;
    exit(1);
  }
  int fileSize = statbuf.st_size;

  // open and read file into new buffer
  char *buffer = new char[fileSize];
  std::ifstream inFS(argv[1]);
  if (!inFS.is_open()) {
    std::cerr << "Could not open file " << argv[1] << '.' << std::endl;
    return 1;
  }
  inFS.read(buffer, fileSize);
  inFS.close();

  // look for another function in the library
  typedef unsigned char *(*MD5_t)(const unsigned char *d, size_t n,
                                  unsigned char *md);
  MD5_t MD5;
  MD5 = (MD5_t)dlsym(cryptoLib, "MD5");
  if ((error = dlerror()) != NULL) {
    std::cerr << error << std::endl;
    dlclose(cryptoLib);
    exit(1);
  }

  // calculate MD5 by calling the new function
  unsigned char result[MD5_DIGEST_LENGTH];
  MD5((unsigned char *)buffer, fileSize, result);

  // print MD5 in hex digits
  for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    std::cout << std::setw(2) << std::setfill('0') << std::hex
              << (int)result[i];
  }
  std::cout << std::dec << "  " << argv[1] << '(' << fileSize << ')'
            << std::endl;

  // free allocated memory and return
  delete[] buffer;

  dlclose(cryptoLib);
  return 0;
}
