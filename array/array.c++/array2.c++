#include<iostream>
using namespace std;
int main()/*
{
    int arr[]={1,2,3,4,5};
    
    //using fool
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
{
  int arr[]={1,2,3,4};
  for(int ele:arr)
  {
    cout<<ele<<endl;
  }
  return 0;
}*/
{
    int arr[5];
    int size=sizeof(arr)/sizeof arr[0];
    int i=0;
    while (i<size)
    {
        cout<<i++<<endl;
    }
    return 0;
}