#include<iostream>
#include<vector>
using namespace std;
/*
void insertionsort(vector<int>&v)
{
 int n=v.size();
  for (int i = 0; i<n-1; i++)
  {
    //find minimum element 
    int min_idx=i;
    for (int j =i+1;j<n; j++)
    {
      if (v[j]<v[min_idx])
      {
       min_idx=j;
      } 
    }
    //if minimum index present at i
   if(i!=min_idx) 
   {
    swap(v[i],v[min_idx]);
   }
  }
}
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for (int  i = 0; i <n; i++)
  {
    cin>>v[i];
  }
  insertionsort(v);
  for (int i = 0; i<n; i++)
  {
    cout<<v[i]<<" "; 
  }cout<<endl;
}*/
void insertionsort(int a[],int n)
{
  for (int i = 0;i<n-1; i++)
  {
    // find minimum elements
    int min_idx=i;
    for (int j=i+1; j<n; j++)
    {
      if (a[j]<a[min_idx])
      {
        min_idx=j;
      }
      
    }
    if(i!=min_idx)
    {
      swap(a[i],a[min_idx]);
    }
  }
  

}
int main()
{
  int n;
  cin>>n;
  int a[10];
  for (int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  insertionsort(a,n);
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }cout<<endl;
  return 0;
  
}
  