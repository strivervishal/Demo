/*check given number is sorted or not */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
  int arr[]={1,2,4,5,6,7};
  bool sortedflag=true;
  for (int i = 1; i<6; i++)
  {
    if (arr[i]<=arr[i-1])
    {
        sortedflag=false;
    }
    
  }
  cout<<sortedflag<<endl;
  
}