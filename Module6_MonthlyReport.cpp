
// Module 6. Write a C++ program for monthly expense report.

#include <iostream>
using namespace std;

int main()
{
    int expenses[5] = {500, 300, 700, 200, 400};
    int total = 0;

    cout << "Monthly Expense Report:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Expense " << i + 1 << ": Rs. "
             << expenses[i] << endl;

        total = total + expenses[i];
    }

    cout << "\nTotal Monthly Expense: Rs. " << total;

    return 0;
}

// Output:
// Monthly Expense Report:
// Expense 1: Rs. 500
// Expense 2: Rs. 300
// Expense 3: Rs. 700
// Expense 4: Rs. 200
// Expense 5: Rs. 400
//
// Total Monthly Expense: Rs. 2100
