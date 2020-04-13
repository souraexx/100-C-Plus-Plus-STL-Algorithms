
// C++ program to demonstrate
// the use of std::swap_ranges
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // Declaring first vector
    vector<int> v1;
    int i;

    // v1 contains 0 1 2 3 4 5 6 7 8 9
    for (i = 0; i < 10; ++i)
    {
        v1.push_back(i);
    }

    // Declaring second vector
    // v2 contains 100 100 100 100 100
    vector<int> v2(5, 100);

    // Performing swap
    std::swap_ranges(v1.begin() + 3, v1.begin() + 7, v2.begin());

    // Displaying v1 after swapping
    for (i = 0; i < 10; ++i)
    {
        cout << v1[i] << " ";
    }

    cout << "\n";

    // Displaying v2 after swapping
    for (i = 0; i < 5; ++i)
    {
        cout << v2[i] << " ";
    }

    return 0;
}