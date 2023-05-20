#include<iostream>
using namespace std;
void problem(int arr[],int n){

   for (int i=0; i<n-1; i++)
   {
     for (int j=0; j<n-1-i; j++)
     {
        if (arr[j]==0 && arr[j]!=arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        
     }
     
   }
   
}
int main(){
int n=8;
int arr[]={0,5,0,3,42,0,4,6};
problem(arr,n);
for (int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
 return 0;
}