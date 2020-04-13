
// CPP program to check if
// two arrays are equal or not
// using std :: is_permutation
#include <iostream>
#include <algorithm>

//Driver Code
int main()
{
    int A[] = {1, 7, 0, 2};
    int B[] = {0, 7, 2, 1};

    // Check if array B includes all elements of
    // array A
    if (std ::is_permutation(A, A + 4, B))
    {
        std ::cout << "B is a permutation of A";
    }

    else
    {
        std ::cout << "B is not a permutation of A";
    }
    return 0;
}