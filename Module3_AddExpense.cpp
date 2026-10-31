
// Module 3. Write a C++ program to add daily expenses.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string category;
    float amount;

    cout << "Enter expense category: ";
    cin >> category;

    cout << "Enter expense amount: ";
    cin >> amount;

    cout << "\nExpense Added Successfully!";
    cout << "\nCategory: " << category;
    cout << "\nAmount: Rs. " << amount;

    return 0;
}

// Output:
// Enter expense category: Food
// Enter expense amount: 200
//
// Expense Added Successfully!
// Category: Food
// Amount: Rs. 200
