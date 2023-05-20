#include<iostream>
#include<string>
using namespace std;
int main()
{
     char vowels[5];
    for(char &element:vowels)  //Ampercent operator is use to copy value of element
    {
        cin>>element;
    }
    for(char element:vowels) 
    {
        cout<<element<<endl;
    }
    return 0;
    
}