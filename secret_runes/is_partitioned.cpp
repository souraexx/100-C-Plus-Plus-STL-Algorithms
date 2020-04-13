#include <iostream>
#include <algorithm>
#include <vector>

// Defining the BinaryFunction
bool pred(int a)
{
    return (a % 3 == 0);
}

using namespace std;
int main()
{
    // Declaring first vector
    vector<int> v1 = {3, 6, 9, 10, 11, 13};

    // Using std::is_partitioned
    bool b = std::is_partitioned(v1.begin(), v1.end(), pred);

    if (b == 1)
    {
        cout << "It is partitioned";
    }
    else
    {
        cout << "It is not partitioned.";
    }
    return 0;
}