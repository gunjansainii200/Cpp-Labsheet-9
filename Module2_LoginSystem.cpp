
// Module 2. Write a C++ program for Login System.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    string savedUsername = "rahul123";
    string savedPassword = "12345";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == savedUsername && password == savedPassword)
    {
        cout << "\nLogin Successful!";
        cout << "\nWelcome to Expense Tracker.";
    }
    else
    {
        cout << "\nInvalid username or password.";
    }

    return 0;
}

// Output:
// Enter username: rahul123
// Enter password: 12345
//
// Login Successful!
// Welcome to Expense Tracker.
