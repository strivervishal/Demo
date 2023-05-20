#include<iostream>
#include<cstring>
using namespace std;
void vishal(char fruit[][50],int n){

  for (int i = 0; i <n-1; i++)
  {
    //find minimum element
    int min_element=i;
    for (int j= i+1;j<n; i++)
    {
        
        if (strcmp(fruit[min_element],fruit[j])>0)
        {
            min_element=j;
        }
        
    }
    if (min_element!=i)
    {
        swap(fruit[min_element],fruit[i]);
       char temp[50]
       strcpy();
    }
    
    
  }
  
}
int main(){
    char fruit[][50]={"papaya","lime","watermelon","apple","mango","kiwi"};

    int n=sizeof(fruit)/sizeof(fruit[0]);
    vishal(fruit,n);
    for (int i=0; i<n; i++)
    {
        cout<<fruit<<" ";
    }
    

}