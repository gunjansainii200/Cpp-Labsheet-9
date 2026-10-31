
// Module 10. Write a C++ program for searching expense.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string category[5] = {"Food", "Travel", "Shopping", "Food", "Bills"};
    int amount[5] = {200, 300, 500, 400, 250};

    string search;
    bool found = false;

    cout << "Enter category to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (category[i] == search)
        {
            cout << "Expense Found!";
            cout << "\nCategory: " << category[i];
            cout << "\nAmount: Rs. " << amount[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Expense Not Found.";
    }

    return 0;
}

// Output:
// Enter category to search: Food
// Expense Found!
// Category: Food
// Amount: Rs. 200
// Expense Found!
// Category: Food
// Amount: Rs. 400
