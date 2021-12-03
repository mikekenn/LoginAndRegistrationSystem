#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>

class System
{
private:
    /* data */
public:
    System(/* args */);
    ~System();
    void CreateFile(std::string filePath, std::string un, std::string pw);
    bool IsLoggedIn(std::string filePath, std::string p_username, std::string p_password);
};

#endif // SYSTEM_H