#include "System.h"

#include <string>
#include <fstream>

using namespace std;

System::System(/* args */)
{
}

System::~System()
{
}

void System::CreateFile(string filePath, string un, string pw){
    
    ofstream file;
    file.open(filePath + un + ".txt");

    file << un << endl << pw;

    file.close();
}

bool System::IsLoggedIn(std::string filePath, std::string p_username, std::string p_password){
    string un, pw;

    ifstream read(filePath + p_username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == p_username && p_password == pw){
        return true;
    }
    else{
        return false;
    }
}
