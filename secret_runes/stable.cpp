//THERE IS stable_sort WHICH IS ALMOST SIMILAR TO sort
//STABLE PARTITION
#include <iostream>
#include <algorithm> // std::stable_partition
#include <vector>

bool odd(int i) { return (i % 2) == 1; }

int main()
{
    std::vector<int> vct;

    for (int i = 1; i < 10; ++i)
        vct.push_back(i); // 1 2 3 4 5 6 7 8 9

    std::vector<int>::iterator bound;
    bound = std::stable_partition(vct.begin(), vct.end(), odd);

    std::cout << "odd numbers:";
    for (std::vector<int>::iterator it = vct.begin(); it != bound; ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "evennumbers:";
    for (std::vector<int>::iterator it = bound; it != vct.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}