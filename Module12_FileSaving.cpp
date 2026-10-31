
// Module 12. Write a C++ program for file saving.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    int amount;
    
    cout << "Enter expense amount: Rs. ";
    cin >> amount;

    file.open("expenses.txt");

    file << "Expense Amount: Rs. " << amount;

    file.close();

    cout << "\nExpense Saved Successfully!";

    return 0;
}

// Output:
// Enter expense amount: Rs. 500
//
// Expense Saved Successfully!
