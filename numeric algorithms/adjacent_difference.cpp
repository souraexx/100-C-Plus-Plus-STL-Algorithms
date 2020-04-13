// CPP program to illustrate
// std :: adjacent_difference

#include <iostream> // std::cout
#include <numeric>  // std::adjacent_difference

// Driver code
int main()
{
    int val[] = {1, 2, 3, 5, 9, 11, 12};
    int n = sizeof(val) / sizeof(val[0]);
    int result[7];

    // Array contains
    std::cout << "Array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << val[i];
    std::cout << "\n";

    // Using default std :: adjacent_difference
    std::adjacent_difference(val, val + 7, result);
    std::cout << "Using default adjacent_difference: ";
    for (int i = 1; i < n; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';

    return 0;
}