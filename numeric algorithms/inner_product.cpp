// CPP program to illustrate
// std :: inner_product
#include <iostream>   // std::cout
#include <functional> // std::minus, std::divides
#include <numeric>    // std::inner_product

// Custom funcitons
int myaccumulator(int x, int y)
{
    return x - y;
}
int myproduct(int x, int y)
{
    return x + y;
}

// Driver code
int main()
{
    // The value which is added after
    // finding inner_product b/w elements
    int init = 100;
    int series1[] = {10, 20, 30};
    int series2[] = {1, 2, 3};
    int n = sizeof(series1) / sizeof(series1[0]);

    // Elements in series1
    std::cout << "First array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << series1[i];
    std::cout << "\n";

    // Elements in series2
    std::cout << "Second array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << series2[i];
    std::cout << "\n\n";

    std::cout << "Using custom functions: ";
    std::cout << std::inner_product(series1, series1 + 3, series2, init,
                                    myaccumulator, myproduct);
    std::cout << '\n';

    return 0;
}