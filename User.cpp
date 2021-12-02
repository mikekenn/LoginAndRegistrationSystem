#include "User.h"

User::User(std::string un, std::string pw, bool status)
: username(un), password(pw), status(status)
{
}

User::User()
{
}

User::~User()
{
}

std::string User::GetUserName(){
    return username;
}

void User::SetUserName(std::string un){
    username = un;
}

std::string User::GetPassword(){
    return password;
}

void User::SetPassword(std::string pw){
    password = pw;
}

bool User::GetStatus(){
    return status;
}

void User::SetStatus(bool InStatus){
    status = InStatus;
}
