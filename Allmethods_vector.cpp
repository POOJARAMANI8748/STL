#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;    
v.push_back(2);//append or add the element in vector
v.pop_back();//remove the last element from vector
v.emplace_back();//same as push back but faster then it
v.size();//size of vector
v.clear();//will clear all the elements of vector, all delete at once
v.begin();//points on first element
v.end();//points on next element of the last
v.rbegin();//points on last element
v.begin();//points on prev element of first
v.front();//first element of vector
v.back();//last element of vector
v.empty();//check whether th evector is empty or not
//v.erase(position);//or
//v.erase(posI, posII);//[it will erase elements from posI to posII-1] - to delete elements from vector
//swap(v1, v2);// - will swap two vectors
}