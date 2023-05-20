//how to take input in vector and also how insert and delete any thing
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    for (int i = 0; i <5; i++)
   {
       cout<<v[i]<<endl;

    }
     v.insert(v.begin()+2,6);
      v.erase(v.end()-2);
    
    //for each loop
    for(int ele:v)
    {
        cout<<ele<<endl;
    }
    v.erase(v.end()-2);
    int i=0;
    while (i<5)
    {
        cout<<v[i++]<<endl;
    }

    
  

     
}