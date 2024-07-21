#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int arr[5]={1,3,5,7,8};
int size=5;
int max=INT_MIN;
for(int i=0;i<size;i++)
{
    if (arr[i]>max)
        max=arr[i];
}
cout<<"Maximum is "<<max;
return 0;
}