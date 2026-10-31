
// Module 9. Write a C++ program for expense prediction.

#include <iostream>
using namespace std;

int main()
{
    float dailyExpense, predictedExpense, budget;

    cout << "Enter daily expense: Rs. ";
    cin >> dailyExpense;

    cout << "Enter monthly budget: Rs. ";
    cin >> budget;

    predictedExpense = dailyExpense * 30;

    cout << "\nPredicted Monthly Expense: Rs. "
         << predictedExpense;

    if (predictedExpense > budget)
    {
        cout << "\nWarning! Budget may be exceeded.";
    }
    else
    {
        cout << "\nYour expenses are within budget.";
    }

    return 0;
}

// Output:
// Enter daily expense: Rs. 200
// Enter monthly budget: Rs. 5000
//
// Predicted Monthly Expense: Rs. 6000
// Warning! Budget may be exceeded.
