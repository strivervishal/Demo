// seconnd greatest elementt
#include<iostream>
#include<climits>
using namespace std;
int secondLargestElement(int array[],int size)
{
 int max=INT_MIN;  
int second_max=INT_MIN;
for (int i = 0; i <size; i++)
{
    if (array[i]>max)
    {
       max=array[i];
    }
    
}
for (int i = 0; i <size; i++)
{
    if (array[i]>second_max && array[i]!=max)
    {
        second_max=array[i];
    }   
}
  return second_max;
}
int main(){
    int array[]={2,3,5,7,6,1,7};
    int n=7;
    cout<<secondLargestElement(array,n)<<endl;
}


