#include "User.h"

User::User(std::string un, std::string pw, bool status)
: username(un), password(pw), status(status)
{
}

User::User()
{
    this->status = false;
}

User::~User()
{
}

std::string User::GetUserName(){
    return username;
}

void User::SetUserName(){

    std::cout << "Enter a username: ";
    std::cin >> this->username;
}

std::string User::GetPassword(){
    return password;
}

void User::SetPassword(){
    std::cout << "Enter a password: ";
    std::cin >> this->password;
}

bool User::GetStatus(){
    return status;
}

void User::SetStatus(bool InStatus){
    status = InStatus;
}
