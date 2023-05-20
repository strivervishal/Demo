#include<iostream>
#include<vector>
using namespace std;
// using array
/*void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        // i element sorted due to this we can use n-1-i in given loop
        for(int j=0;j<n-1-i;j++) 
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
  int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
// implementation of bubble sort by using vector
#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        // i element sorted due to this we can use n-1-i in given loop
        for(int j=0;j<n-1-i;j++) 
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
  vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bubblesort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}