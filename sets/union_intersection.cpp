// C++ code to demonstrate the working of
// set_union() and set_intersection()
#include <iostream>
#include <algorithm> // for merge operations
#include <vector>    // for vector
using namespace std;
int main()
{
    // Initializing 1st vector
    vector<int> v1 = {1, 3, 4, 5, 20, 30};

    // Initializing 2nd vector
    vector<int> v2 = {1, 5, 6, 7, 25, 30};

    // Declaring resultant vector
    // for union
    vector<int> v3(10);

    // Declaring resultant vector
    // for intersection
    vector<int> v4(10);

    // using set_union() to compute union  of 2
    // containers v1 and v2 and store result in v3
    auto it = set_union(v1.begin(), v1.end(), v2.begin(),
                        v2.end(), v3.begin());

    // using set_intersection() to compute intersection
    // of 2 containers v1 and v2 and store result in v4
    auto it1 = set_intersection(v1.begin(), v1.end(),
                                v2.begin(), v2.end(), v4.begin());

    // resizing new container
    v3.resize(it - v3.begin());

    // resizing new container
    v4.resize(it1 - v4.begin());

    // Displaying set union
    cout << "Union of two containers is : ";
    for (int &x : v3)
        cout << x << " ";
    cout << endl;

    // Displaying set intersection
    cout << "Intersection of two containers is : ";
    for (int &x : v4)
        cout << x << " ";
    cout << endl;

    return 0;
}