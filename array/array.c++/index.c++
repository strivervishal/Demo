#include<iostream>
using namespace std;
int f(int *arr[],int idx,int n)
{
    if (idx==n-1)
    {
        return arr[idx];
    }
    return Max(arr[idx],f(arr,idx+1,n));
    
}
int main(){
    int n=5;
    int arr[]={2,4,3,8,5};
    cout<<f(arr,0,n);
}
