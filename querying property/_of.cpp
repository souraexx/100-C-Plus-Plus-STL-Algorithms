// C++ code to demonstrate working of all_of()
#include <vector>
#include <algorithm>
#include <iostream>
int main()
{
    std::vector<int> v(10, 2);

    // illustrate all_of
    if (std::all_of(v.cbegin(), v.cend(), [](int i) { return i % 2 == 0; }))
    {
        std::cout << "All numbers are even\n";
    }
    else if (std::any_of(v.cbegin(), v.cend(), [](int i) { return i % 2 == 0; }))
    {
        std::cout << "Some numbers are even\n";
    }
    if (std::none_of(v.cbegin(), v.cend(), [](int i) { return i % 2 == 1; }))
    {
        std::cout << "No numbers are odd\n";
    }
}