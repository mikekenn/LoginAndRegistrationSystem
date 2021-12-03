#include "User.h"
#include "System.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string path("/Users/michael/GitProjects/LoginAndRegistrationSystem/data/");

int main(){

    int choice;
    string username, password;
    System system;
    User LoggedInUser;

    do
    {
        cout << "1: Register\n2: Login\n:Your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            LoggedInUser.SetUserName();
            LoggedInUser.SetPassword();

            system.CreateFile(path, LoggedInUser.GetUserName(), LoggedInUser.GetPassword());
        }
        else if (choice == 2)
        {
            if (LoggedInUser.GetUserName() == "" || LoggedInUser.GetPassword() == "")
            {
                cout << "Opps! Looks like you havent created an account!/nLets take care of that right now!" << endl;

                LoggedInUser.SetUserName();
                LoggedInUser.SetPassword();

                system.CreateFile(path, LoggedInUser.GetUserName(), LoggedInUser.GetPassword());
            }

            LoggedInUser.SetStatus(system.IsLoggedIn(path, LoggedInUser.GetUserName(), LoggedInUser.GetPassword()));
            
            if (LoggedInUser.GetStatus() == false)
            {
                cout << "Failed login!" << endl;
                LoggedInUser.SetStatus(false);
            }
            else
            {
                cout << "Successful login!" << endl;
                LoggedInUser.SetStatus(true);
            }
        }
    } while (LoggedInUser.GetStatus() == false);

    return 0;
}
