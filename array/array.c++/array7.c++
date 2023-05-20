//find the  maximum value out of element in the  array
#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,7,9,10};
    int max=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        
    }
     cout<<max<<endl;
     return 0;
}