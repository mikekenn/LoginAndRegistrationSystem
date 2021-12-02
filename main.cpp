#include "User.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn(){

    string username, password, un, pw;


    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream read("/Users/michael/GitProjects/LoginAndRegistrationSystem/data/" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && password == pw){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int choice;
    string username, password;
    User LoggedInUser;

    do
    {
        cout << "1: Register\n2: Login\n:Your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "select a username: ";
            cin >> username;

            cout << "select a password: ";
            cin >> password;

            LoggedInUser.SetUserName(username);
            LoggedInUser.SetPassword(password);

            ofstream file;
            file.open("/Users/michael/GitProjects/LoginAndRegistrationSystem/data/" + LoggedInUser.GetUserName() + ".txt");

            file << LoggedInUser.GetUserName() << endl << LoggedInUser.GetPassword();

            file.close();
        }
        else if (choice == 2)
        {
            LoggedInUser.SetStatus(IsLoggedIn());
            
            if (LoggedInUser.GetStatus() == false)
            {
                cout << "Failed login!" << endl;
                system("PAUSE");
                LoggedInUser.SetStatus(false);
            }
            else
            {
                cout << "Successful login!" << endl;
                system("PAUSE");
                LoggedInUser.SetStatus(true);
            }
        }
    } while (LoggedInUser.GetStatus() == false);

    return 0;
}
