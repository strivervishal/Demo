//we have a vector 1,2,3,4,5,6 { 1 2 3}={4 5 6}
#include<iostream>
#include<vector>
using namespace std;
bool checkprefixSumsuffixSum(vector<int>&v)
{
    int total_sum=0;
    for (int i = 0; i <v.size(); i++)
    {
     total_sum =v[i]+total_sum;
    }
    int prefix_sum=0;
    for (int i = 0; i <v.size(); i++)
    {
      prefix_sum = v[i]+prefix_sum;
      int suffix_sum =total_sum - prefix_sum;
      if (suffix_sum == prefix_sum)
      {
        return true;
      }
    }
    return false;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v;
 for (int i = 0; i <n; i++)
 {
    int ele;
    cin>>ele;
    v.push_back(ele);
 }
 cout<<checkprefixSumsuffixSum(v); 

}