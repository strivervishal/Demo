/*with out using pointer call by reference 
#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=10;
    int y=15;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}*/
#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=10;
    int y=15;
    int *ptr1=&x;
    int *ptr2=&y;
    swap(ptr1,ptr2);
    cout<<x<<" "<<y;
    return 0;
}