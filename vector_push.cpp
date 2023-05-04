#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, b, x, sum = 0;
    vector<int> v;
    cout << "Starting size = " << v.size() << endl;
    cout << "Strating capacity = " << v.capacity() << endl;
    cout << "Enter the size of array b :";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (auto it : v)
    {
        sum += it;
    }
    cout << "Sum of this numbers : " << sum << endl;
    cout << "Ending size of array = " << v.size() << endl;
    cout << "Ending capacity of array = " << v.capacity() << endl;
}
