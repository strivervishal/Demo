#include<iostream>
using namespace std;
//function prototype
int sub(int,int);
int main()
{
    int x=100,y=12;
    int difference=sub(x,y);
    cout<<difference<<endl;
    return 0;
}
 //function definition
 int sub(int x,int y)
 {
    int dif=x-y;
    return dif;
 }