#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[])
{
    for (int i = 0; i < 10; ++i)
        cout << a[i] << " ";
}

int main()
{
    int a[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout << "\n The array before sorting is : ";
    show(a);

    sort(a, a + 10);

    cout << "\n\n The array after sorting is : ";
    show(a);

    int b[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout << "\n\n\n The array before partial sorting is :";
    show(b);

    partial_sort(b, b + 5, b + 10);

    cout << "\n\n The array after partial sorting is :";
    show(b);

    int c[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout << "\n\n\n The array before nth sorting is :";
    show(c);

    nth_element(c, c + 5, c + 10);

    cout << "\n\n The array after nth sorting is :";
    show(c);

    return 0;
}