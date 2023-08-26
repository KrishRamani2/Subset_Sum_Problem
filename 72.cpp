#include <iostream>
using namespace std;
int subset(int arr[], int n,int sum)
{
    if(n==0) 
    return (sum==0)?1:0;
    else
    return subset(arr,n-1,sum)+subset(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n = 3, arr[]= {10, 20, 15}, sum = 25;
    cout<<subset(arr,n,sum);
    return 0;	
}