#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<"address stored inside the ptr:" <<ptr<<"\n";
    cout<<"value stored at the address stored int ptr:"<<*ptr<<"\n";
    //updating the value of x=15
    *ptr=15;
    cout<<"new value of x:"<<x<<"\n";
    cout<<"updating the value of x:"<<*ptr<<"\n";
    int resultAtX = *ptr;
    cout<<resultAtX<<endl; 
  
}