#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 100> arr;
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";

    // for each loop
    for (auto it : arr)
        cout << it << " ";
}