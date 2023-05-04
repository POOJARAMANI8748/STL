#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5>arr;
    for(int i=0; i<arr.size();i++)
    {
        cout<<"array:";
        cin>>arr[i];
    }
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    sort(arr.rbegin(),arr.rend());
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    for(auto it= arr.begin(); it !=arr.end(); it++)
    {
        //cout<<*it<<endl;
    }
    for(auto it : arr)
    {
        //cout<< it<<"";
    }
    cout<<*arr.begin()<<endl;
    cout<<*arr.end()<<endl;
    cout<<*arr.rbegin()<<endl;
    cout<<*arr.rend()<<endl;
}
