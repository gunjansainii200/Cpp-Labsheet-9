
// Module 4. Write a C++ program to view expense history.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string category[5] = {"Food", "Travel", "Shopping"};
    int amount[5] = {200, 100, 500};

    cout << "Expense History:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Category: " << category[i];
        cout << " | Amount: Rs. " << amount[i] << endl;
    }

    return 0;
}

// Output:
// Expense History:
// Category: Food | Amount: Rs. 200
// Category: Travel | Amount: Rs. 100
// Category: Shopping | Amount: Rs. 500
