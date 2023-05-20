#include<iostream>
using namespace std;
int square(int num)
{
    int sq=(num*num);
    return sq; 
}

int main()
{
    for(int i=1;i<=5;i++)
    {  
        square(i);       //function calling here!
    cout<<square(i)<<endl;
    }
    return 0;
}


