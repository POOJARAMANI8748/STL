#include <bits/stdc++.h>
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector <string> ans;
    for(int i=0;i<=n;i++)
    {
     if(i % 15==0)
     {
        ans.push_back("FizzBuzz");
     }
     else if(i%3==0)
     {
        ans.push_back("Fizz");
     }
     else if(i%5==0)
     {
        ans.push_back("Buzz");
     }
     else
     
    ans.push_back(to_string(i));
    }
     return ans;
    }     
int main()
{
    int n,i=0,k=0;
    char arr[n],temp[k];
    cout<<"Enter the s :";
    cin>>arr[i];
    if(n%2!=0)
    {
        for(i=0;i<n/2;i++)
        {
            temp[k]=arr[i];
        }
        cout<<temp[k];
    }
    return 0;
}