
// C++ program to demonstrate working of
// transform with unary operator.
#include <bits/stdc++.h>
using namespace std;

int increment(int x) { return (x + 1); }

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr + n, arr, increment);
    //it can also be binary

    // vect is a vector of integers.
    //transform(vect1.begin(), vect1.end(),  vect2.begin(), increment);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}