#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";
    cout << "Before Rotate : " << str << endl;

    rotate(str.begin(), str.begin() + 2, str.end());
    cout << "After Rotate  : " << str << endl;
    reverse(str.begin(), str.end());
    cout << "After Reverse : " << str << endl;

    return 0;
}