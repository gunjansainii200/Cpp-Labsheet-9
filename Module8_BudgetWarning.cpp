
// Module 8. Write a C++ program for budget warning.

#include <iostream>
using namespace std;

int main()
{
    float budget, expense;

    cout << "Enter monthly budget: Rs. ";
    cin >> budget;

    cout << "Enter total expenses: Rs. ";
    cin >> expense;

    if (expense > budget)
    {
        cout << "\nWarning! Budget Exceeded.";
    }
    else
    {
        cout << "\nYou are within your budget.";
    }

    return 0;
}

// Output:
// Enter monthly budget: Rs. 5000
// Enter total expenses: Rs. 6000
//
// Warning! Budget Exceeded.
