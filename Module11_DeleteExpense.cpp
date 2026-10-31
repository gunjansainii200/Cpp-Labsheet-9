
// Module 11. Write a C++ program for deleting expense.

#include <iostream>
using namespace std;

int main()
{
    int expenses[5] = {200, 300, 500, 400, 250};
    int position;

    cout << "Expense List:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Rs. " << expenses[i] << endl;
    }

    cout << "\nEnter expense number to delete: ";
    cin >> position;

    if (position >= 1 && position <= 5)
    {
        for (int i = position - 1; i < 4; i++)
        {
            expenses[i] = expenses[i + 1];
        }

        cout << "\nExpense Deleted Successfully!";
        cout << "\nUpdated Expense List:\n";

        for (int i = 0; i < 4; i++)
        {
            cout << "Rs. " << expenses[i] << endl;
        }
    }
    else
    {
        cout << "Invalid expense number.";
    }

    return 0;
}

// Output:
// Expense List:
// 1. Rs. 200
// 2. Rs. 300
// 3. Rs. 500
// 4. Rs. 400
// 5. Rs. 250
//
// Enter expense number to delete: 3
//
// Expense Deleted Successfully!
// Updated Expense List:
// Rs. 200
// Rs. 300
// Rs. 400
// Rs. 250
