#include<iostream>
using namespace std;
int sum_vishal(int x,int y)
{
    int result=0;
    for (int i = x; i <y; i++)
    {
     result+=i;
    }
    return result;
    
}
int sum_in_vishaloptimized(int x,int y)
{
    int n=y-x+1;
    int a=x;
    int result=(n*(2*a+(n-1)*1))/2 ;
    return result;
}


int main(){
     

    cout<<sum_vishal(1,12)<<endl;
    cout<< sum_in_vishaloptimized(1,3);
    return 0;
}

