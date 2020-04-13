
// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <numeric>
using namespace std;

// User defined function
int myfun(int x, int y)
{
    // for this example we have taken product
    // of adjacent numbers
    return x * y;
}

int main()
{
    // Initialize sum = 1
    int sum = 1;
    int a[] = {5, 10, 15};

    // Simple default accumulate function
    cout << "\nResult using accumulate: ";
    cout << accumulate(a, a + 3, sum);

    // Using accumulate function with
    // defined function
    cout << "\nResult using accumulate with"
            "user-defined function: ";
    cout << accumulate(a, a + 3, sum, myfun);

    // Using accumulate function with
    // pre-defined function
    cout << "\nResult using accumulate with "
            "pre-defined function: ";
    cout << accumulate(a, a + 3, sum, std::minus<int>());

    return 0;
}