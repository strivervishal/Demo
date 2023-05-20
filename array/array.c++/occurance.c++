/*find the last occurance of given array {1,2,3,4,5,6,1} */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(7);
    for (int i = 0; i <7; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter x :";
    int x;
    cin>>x;
    int occurance=-1;
    for (int i = 0; i <v.size(); i++)
    {
        if(v[i]==x)
        {
            occurance=i;
        }
    }
    cout<<occurance<<endl;
    
    return 0;

}
