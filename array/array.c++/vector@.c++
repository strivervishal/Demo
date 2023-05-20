//we have a integer array solve there running sum or prefix sum
// 3,4,5,6,7
#include<iostream>
#include<vector>
using namespace std;
void runningSum(vector<int>&v)
{
    for (int i = 1; i<v.size(); i++)
    {
        v[i]=v[i-1]+v[i];
       
    }
    
}
int main(){
    cout<<"Enter the size of vector:";
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i<n; i++)
    {
       int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningSum(v);
    for (int i = 0; i <n; i++)
    {
        cout<<v[i]<<endl;
    } 
}

