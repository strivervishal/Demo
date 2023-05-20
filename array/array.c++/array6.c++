//calculate sum of element in array
#include<iostream>
using namespace std;
int main(){
    /*int array[]={3,4,5,6,7,7};
    int sum=0;
    for (int i = 0; i <6; i++)
    {
       sum=array[i]+sum;
    }
    cout<<sum<<endl;
    return 0;*/
    int array[5];
    int sum=0;
    int size=sizeof(array)/sizeof array[0];
    for (int i = 0; i < size; i++)
    {
       cin>>array[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum=sum+array[i];
    }
    
   cout<<sum<<endl;
   return 0;
  //  cout<<sizeof(array);
}
