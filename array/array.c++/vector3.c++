//calculate the number of element greater than x {1,3,4,5,6,7}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter x: ";
    int x;
    cin>>x;
    int occurance=0;
    for(int i=0;i<6;i++)
    {
        if(v[i]>x)
        {
            occurance+=1;
        }
    }
    cout<<occurance<<endl;

}