#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, x, sum;
    vector<int> v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.pop_back();
    v.erase(v.begin() + 2, v.begin() + 4);
    v.push_back(1);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl
         << "Enter the size :";
    cin >> v[i];
    for (int i = 0; i < v.size(); i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << v.size() << endl;
    cout << v.capacity() << endl;
}
