#include "User.h"

User::User(std::string un, std::string pw)
: username(un), password(pw)
{
}

User::~User()
{
}

std::string User::GetUserName(){
    return username;
}

std::string User::GetPassword(){
    return password;
}