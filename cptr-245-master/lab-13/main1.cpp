/*
 * main1.cpp for CPTR 245 Lab 13 on libraries and versions
 */

#include <fstream>    // std::ifstream
#include <iomanip>    // std::setfill, std::setw
#include <iostream>   // std::cout, std::endl
#include <sys/stat.h> // stat() to get file size

#include <openssl/crypto.h>
#include <openssl/md5.h>

int main(int argc, char *argv[]) {
  // verify proper command-line arguments
  if (argc != 2) {
    std::cerr << "USAGE: ./a.out FILEPATH" << std::endl;
    exit(1);
  }

  // print version found in header file
  std::cout << "SSL Header Version:  " << OPENSSL_VERSION_TEXT << std::endl;
  // print version found in library linked at runtime
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

  // calculate MD5
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
  return 0;
}
