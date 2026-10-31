
// Module 5. Write a C++ program for category-wise expense.

#include <iostream>
using namespace std;

int main()
{
    string category[3] = {"Food", "Travel", "Shopping"};
    int amount[3] = {500, 300, 700};

    cout << "Category-wise Expenses:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << category[i] << ": Rs. " << amount[i] << endl;
    }

    return 0;
}

// Output:
// Category-wise Expenses:
// Food: Rs. 500
// Travel: Rs. 300
// Shopping: Rs. 700
