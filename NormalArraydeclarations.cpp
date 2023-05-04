#include <iostream>
using namespace std;
int main()
{
    int a1[20];           // all will have garbage value because we are inside main method, globally it will be zero
    int a[4] = {1, 2, 3}; // first 3 elements are respectively 1 2 and 3 and last element is 0
    int a[10] = {1};      // first element is 1 all other will be zero
    int a[10] = {0};      // all elements are 0
}