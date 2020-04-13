// C++ code to demonstrate the working of
// lexicographical_compare()
//Dictionary order
#include <iostream>
#include <algorithm> // for lexicographical_compare()
using namespace std;

int main()
{
    // initializing char arrays
    char one[] = "geeksforgeeks";
    char two[] = "gfg";

    // using lexicographical_compare for checking
    // is "one" is less than "two"
    if (lexicographical_compare(one, one + 13, two, two + 3))
    {
        cout << "geeksforgeeks is lexicographically less than gfg";
    }
    else
    {
        cout << "geeksforgeeks is not lexicographically less than gfg";
    }
}