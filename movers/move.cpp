// CPP program to illustrate
// std::move and std::move_backward
// STL library functions
#include <bits/stdc++.h>

// Driver code
int main()
{
    std ::vector<int> vec1{1, 2, 3, 4, 5};
    std ::vector<int> vec2{7, 7, 7, 7, 7};

    // Print elements
    std ::cout << "Vector1 contains :";
    for (int i = 0; i < vec1.size(); i++)
        std ::cout << " " << vec1[i];
    std ::cout << "\n";

    // Print elements
    std ::cout << "Vector2 contains :";
    for (unsigned int i = 0; i < vec2.size(); i++)
        std ::cout << " " << vec2[i];
    std ::cout << "\n\n";

    // std :: move function
    // move first 4 element from vec1 to starting position of vec2
    std ::move(vec1.begin(), vec1.begin() + 4, vec2.begin() + 1);

    // Print elements
    std ::cout << "Vector2 contains after std::move function:";
    for (unsigned int i = 0; i < vec2.size(); i++)
        std ::cout << " " << vec2[i];
    std ::cout << "\n";

    return 0;
}