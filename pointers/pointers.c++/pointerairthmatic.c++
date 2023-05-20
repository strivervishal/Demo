#include<iostream>
using namespace std;
int main()
{
    /*int x=10;
    double y=11.2;
    int *p1=&x;
    double *p2=&y;
    cout<<"size of x:"<<sizeof(x)<<"\n";
    cout<<"size of y:"<<sizeof(y)<<"\n";
    cout<<p1<<" "<<(p1+1)<<" "<<(p1+2)<<"\n";
    cout<<p2<<" "<<(p2+1)<<" "<<(p2+2)<<"\n";*/
    int arr[2]={1,15};
    int *ptr=&arr[0];
    cout<<ptr<<" "<<*ptr<<"\n";
    cout<<*ptr++<<"\n";
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<ptr<<" "<<*(ptr+1)<<"\n";
    cout<<(*ptr)++<<"\n";
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<ptr<<" "<<*ptr<<"\n";
}