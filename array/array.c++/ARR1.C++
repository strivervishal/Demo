// Rotate given array by kk steps [1,2,3,4,5] kk>>nn
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%n;  //k>n
  // insert the k element in new array
  int ansarray[5];
  int j=0;
  for (int i =n-k; i <n; i++)
  {
    ansarray[j++]=array[i];
  }
  // insert the n-k element in new array
  for (int i = 0; i <=k; i++)
  {
    ansarray[j++]=array[i];
  }
  // print given array 
  for (int i = 0; i<n; i++)
  {
    cout<<ansarray[i]<<" ";
  }
  cout<<endl;
  return 0;
}
