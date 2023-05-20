// cout the number of occurance {1,2,1,1,3,1}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v(6);
  for (int i = 0; i <6; i++)
  {
    cin>>v[i];
  }
  cout<<"Enter x: ";
  int x;
  cin>>x;
  int occurance=0;
  for(int ele:v)
  {
   if(ele==x)
   { 
    occurance+=1;
   }
  }
  cout<<occurance<<endl;
}