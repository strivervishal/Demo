#include<iostream>
using namespace std;
void searchAtindexvishal(string s,char ch,int *first,int *last)
{
    for (int i = 0; i< s.size(); i++)
    {
        if(s[i]==ch)
        {
        *first=i;
        }
    }
    for (int i = s.size(); i >= 0; i--)
    {
        if (s[i]==ch)
        {
            *last=i;
        }
        
    }
    
}
int main(){
 string s = "abbcab";
 char ch = 'a';
 int first=-1;
 int last=-1;
 int *p1=&first ;
 int *p2=&last;

 searchAtindexvishal(s,ch,p1,p2);
 cout<<p1<<" "<<p2<<"\n";
 cout<<first<<" "<<last<<"\n";
for (int  i = 0; i <s.size(); i++)
{

    cout<<s[i]<<" "<<"\n";
}


return 0;


}