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
public:
    User(std::string un, std::string pw);
    ~User();
    std::string GetUserName();
    std::string GetPassword();
};

#endif // USER_H