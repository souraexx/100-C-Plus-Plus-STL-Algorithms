// Illustrating the use of rotate_copy
#include <bits/stdc++.h>
using namespace std;

// Driver Program
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    // Use of rotate_copy
    vector<int> gfg(7);
    rotate_copy(arr, arr + 3, arr + 7, gfg.begin());

    // prints the content:
    cout << "gfg contains:";
    for (auto i = gfg.begin(); i != gfg.end(); i++)
        cout << ' ' << *i;
    cout << endl;

    return 0;
}