// C++ program to demonstrate
// the use of std::find_first_of
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // Defining first container
    vector<int> v = {1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8}, i;

    // Defining second container
    vector<int> v1 = {1, 3, 10};

    vector<int>::iterator ip;

    // Using std::find_first_of
    ip = std::find_first_of(v.begin(), v.end(), v1.begin(),
                            v1.end());

    // Displaying the first common element found
    cout << *ip << "\n";

    // Finding the second common element
    ip = std::find_first_of(ip + 1, v.end(), v1.begin(),
                            v1.end());

    // Displaying the second common element found
    cout << *ip << "\n";

    return 0;
}