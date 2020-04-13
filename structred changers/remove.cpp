// CPP program to illustrate
// std::remove and std::remove_if
// algorithm
#include <bits/stdc++.h>

// Function to check whether
// the element is odd or not.
bool IsOdd(int i)
{
    return ((i % 2) == 1);
}

// Driver code
int main()
{
    std ::vector<int> vec1{10, 20, 30, 30, 20, 10, 10, 20};
    std ::vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print original vector
    std ::cout << "Original vector : ";
    for (int i = 0; i < vec1.size(); i++)
        std ::cout << " " << vec1[i];
    std ::cout << "\n";

    // Iterator that store the position of last element
    std ::vector<int>::iterator pend;

    // std ::remove function call
    pend = std ::remove(vec1.begin(), vec1.end(), 20);

    // Print the vector
    std ::cout << "After remove : ";
    for (std ::vector<int>::iterator p = vec1.begin(); p != pend; ++p)
        std ::cout << ' ' << *p;
    std ::cout << '\n';

    // Print original vector
    std ::cout << "\nOriginal vector : ";
    for (int i = 0; i < vec2.size(); i++)
        std ::cout << " " << vec2[i];
    std ::cout << "\n";

    // std ::remove_if function call
    pend = std ::remove_if(vec2.begin(), vec2.end(), IsOdd);

    // Print the vector
    std ::cout << "After remove_if : ";
    for (std ::vector<int>::iterator q = vec2.begin(); q != pend; ++q)
        std ::cout << ' ' << *q;
    std ::cout << '\n';

    return 0;
}