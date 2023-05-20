#include<iostream>
using namespace std;
/*int sumInrange_optimized(int x,int y){
    int n=y-x+1;
    int a=x;
    int result=(n*(2*a+(n-1)*1))/2 ;
    return result;
}*/
int sumOfrange(int x,int y)
{
    int result=0;
    for (int i = x; i<=y; i++)
    {
       result+=i;
    }
    return result;
    
}
int main(){
    //cout<< sumInrange_optimized(2,100000)<<endl;
    cout<< sumOfrange(2,100000)<<endl;
}