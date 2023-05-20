#include<iostream>
using namespace std;
bool odd(int num)
{
    for(int i=2;i<num;i++)

     {
        if(num%2==0)
      {
            return false;
        }
    }
        return true;
    }
     int main()
     { 
        int a;
        int b;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(odd(i))
            {
                cout<<i<<" ";
            }
        }
     }
    
  
  

