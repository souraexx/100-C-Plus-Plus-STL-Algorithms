// C++ code to demonstrate the working of minmax()
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    // declaring pair to catch the return value
    pair<int, int> mnmx;
    // Using minmax(a, b)
    mnmx = minmax(53, 23);

    // printing minimum and maximum values
    cout << "The minimum value obtained is : ";
    cout << mnmx.first;
    cout << "\nThe maximum value obtained is : ";
    cout << mnmx.second;

    // Using minmax((array of elements)
    mnmx = minmax({2, 5, 1, 6, 3});

    // printing minimum and maximum values.
    cout << "\n\nThe minimum value obtained is : ";
    cout << mnmx.first;
    cout << "\nThe maximum value obtained is : ";
    cout << mnmx.second;
    cout << "\nDoing it again using max_element and min_element:" << endl;
    int v[] = {'a', 'c', 'k', 'd', 'e', 'f', 'h'};
    int *i1;
    i1 = std::max_element(v, v + 4);
    int *i2;
    i2 = std::min_element(v, v + 4);
    cout << (char)*i1 << "\n"
         << (char)*i2;
}