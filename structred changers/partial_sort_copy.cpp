// C++ program to demonstrate the use of
// std::partial_sort_copy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 3, 10, 3, 3, 7, 7, 8}, v1(3);

    vector<int>::iterator ip;

    // Using std::partial_sort_copy
    std::partial_sort_copy(v.begin(), v.end(), v1.begin(), v1.end());

    // Displaying the vector after applying
    // std::partial_sort_copy
    for (ip = v1.begin(); ip != v1.end(); ++ip)
    {
        cout << *ip << " ";
    }

    return 0;
}