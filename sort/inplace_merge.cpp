// C++ code to demonstrate the working of
// inplace_merge()
#include <iostream>
#include <algorithm> // merge operations
#include <vector>    // for vector
using namespace std;
int main()
{

    // Initializing 1st vector
    vector<int> v1 = {1, 3, 4, 5, 20, 30};

    // Initializing 2nd vector
    vector<int> v2 = {1, 5, 6, 7, 25, 30};

    // Declaring resultant vector
    // for inplace_merge()
    vector<int> v3(12);

    // using copy to copy both vectors into
    // one container
    auto it = copy(v1.begin(), v1.end(), v3.begin());
    copy(v2.begin(), v2.end(), it);

    // Using inplace_merge() to sort the container
    inplace_merge(v3.begin(), it, v3.end());

    // Displaying resultant container
    cout << "The new container after inplace_merging is :\n";
    for (int &x : v3)
        cout << x << " ";
    cout << endl;

    return 0;
}