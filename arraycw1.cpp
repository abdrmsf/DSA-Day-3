#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
for(int i=0;i<5;i++)
{
    cout<<2*arr[i]<<" ";
}
return 0;
}