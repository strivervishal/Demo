#include<iostream>
using namespace std;
//create a function
void addition(int a,int b)
{
    int add=a+b;
    cout<<"SUM :"<<add;
}
int main()
{
    int a,b;
    
    cout<<"Enter two number :";
    cin>>a>>b;
    // function calling
   addition(a,b);

}