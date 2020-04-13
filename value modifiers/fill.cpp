
// C++ program to demonstrate working of fill()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect(8);

    // calling fill to initialize values in the
    // range to 4
    fill(vect.begin() + 2, vect.end() - 1, 4);

    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";

    return 0;
}