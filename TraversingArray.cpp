#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 100> arr;
    for (int i = 0; i < 10; i++)
        cout << arr.at(i) << " "; // will gives value at given index

    // OR you can do as normal like this

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " "; // will gives value at given index
}
