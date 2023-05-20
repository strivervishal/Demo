// write a program to print linear search of given numbers
#include<iostream>
using namespace std;
int main()
{
     int array[]={3,9,18,11,87};
     int key=7;
     int ans=-1;
     for(int i=0;i<5;i++)
     {
        if(array[i]==key)
        {
            ans=i;
            break;
        }
     }
     cout<<ans<<endl;
     return 0;
}