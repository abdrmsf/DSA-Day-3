#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50,60};
int size=6;
int start=0;
int end=size-1;
while(start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
return 0;
}