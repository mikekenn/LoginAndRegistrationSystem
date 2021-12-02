#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User
{
private:
    /* data */
    std::string username;
    std::string password;
    bool status;
public:
    User(std::string un, std::string pw, bool status = false);
    User();
    ~User();
    std::string GetUserName();
    std::string GetPassword();
    void SetUserName(std::string un);
    void SetPassword(std::string pw);
    bool GetStatus();
    void SetStatus(bool InStatus);
};

#endif // USER_H