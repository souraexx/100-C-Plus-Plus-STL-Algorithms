// CPP program to illustrate
// std :: set_difference

#include <bits/stdc++.h>

int main()
{
    int first[] = {5, 10, 15, 20, 25};
    int second[] = {50, 40, 30, 20, 10};
    int n = sizeof(first) / sizeof(first[0]);

    std::vector<int> v2(5);
    std::vector<int>::iterator it, ls;

    std::sort(first, first + 5);
    std::sort(second, second + 5);

    // Print elements
    std::cout << "First array :";
    for (int i = 0; i < n; i++)
        std::cout << " " << first[i];
    std::cout << "\n";

    // Print elements
    std::cout << "Second array :";
    for (int i = 0; i < n; i++)
        std::cout << " " << second[i];
    std::cout << "\n\n";

    // using default comparison
    /* first array intersection second array */
    ls = std::set_difference(first, first + 5, second, second + 5, v2.begin());

    std::cout << "Using default comparison, \n";
    std::cout << "The difference has " << (ls - v2.begin()) << " elements :";
    for (it = v2.begin(); it < ls; ++it)
        std::cout << " " << *it;
    std::cout << "\n";

    return 0;
}