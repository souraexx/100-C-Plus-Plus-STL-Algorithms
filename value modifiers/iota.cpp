
// CPP program to illustrate
// std :: iota
#include <iostream> // std::cout
#include <numeric>  // std::iota

// Driver code
int main()
{
    int numbers[10];
    // Initailising starting value as 100
    int st = 100;

    std::iota(numbers, numbers + 10, st);

    std::cout << "Elements are :";
    for (auto i : numbers)
        std::cout << ' ' << i;
    std::cout << '\n';

    return 0;
}