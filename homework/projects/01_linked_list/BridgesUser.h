/*************************************************************************
 *
 * Project: BridgesUser header file
 *
 * File Name: BridgesUser.h
 * Course:    CPTR 242
 * Date:      April 17, 2019
 */
#include <string>

using namespace bridges;

#ifndef BRIDGES_USER_H
#define BRIDGES_USER_H

class BridgesUser {
private:
  unsigned int BridgesNumber;
  std::string BridgesUserID;
  std::string BridgesAPIKey;

public:
  BridgesUser() {
    BridgesNumber = 2421;
    BridgesUserID = "tinkha";
    BridgesAPIKey = "951664097289";
  }
  unsigned int getBridgesNumber() const { return BridgesNumber; }
  std::string getBridgesUserID() const { return BridgesUserID; }
  std::string getBridgesAPIKey() const { return BridgesAPIKey; }
};

#endif // BRIDGES_USER_H
