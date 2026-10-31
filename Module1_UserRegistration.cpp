// Module 1. Write a C++ program for User Registration.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, username, password;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    cout << "\nRegistration Successful!";
    cout << "\nName: " << name;
    cout << "\nUsername: " << username;

    return 0;
}

// Output:
// Enter your name: Rahul
// Enter username: rahul123
// Enter password: 12345
//
// Registration Successful!
// Name: Rahul
// Username: rahul123
