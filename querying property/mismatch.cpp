
// C++ code to demonstrate the working of
// mismatch( start_iter1, end_iter1, start_iter2 )

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    // initializing vectors
    vector<int> v1 = {1, 10, 15, 20};
    vector<int> v2 = {1, 10, 25, 30, 45};
    vector<int> v3 = {1, 10, 15, 20};
    vector<int> v4 = {1, 10, 15, 20, 24};

    // declaring pointer pair
    pair<vector<int>::iterator,
         vector<int>::iterator>
        mispair;

    // using mismatch() to search for 1st mismatch
    mispair = mismatch(v1.begin(), v1.end(), v2.begin());

    // printing the mismatch pair
    // 1st mismatch at 15 and 25
    cout << "The 1st mismatch element of 1st container : ";
    cout << *mispair.first << endl;

    cout << "The 1st mismatch element of 2nd container : ";
    cout << *mispair.second << endl;

    // using mismatch() to search for 1st mismatch
    mispair = mismatch(v3.begin(), v3.end(), v4.begin());

    // printing the mismatch pair
    // no mismatch
    // points to position after last 0 and corresponding 24
    cout << "The returned value from 1st container is : ";
    cout << *mispair.first << endl;

    cout << "The returned value from 2nd container is : ";
    cout << *mispair.second << endl;
}