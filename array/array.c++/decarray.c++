#include <iostream>
 using namespace std;
int main()
{    
       int r1,c1;
    cin>>r1>>c1;
    int array1[r1][c1]; //taking input 
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j <c1; j++)
        {
            cin>>array1[i][j];
        }
        
    } 
     //taking input 
    int r2,c2;
     cin>>r2>>c2;
    int array2[r2][c2];
    for (int i = 0; i<r2; i++)
    {
     for ( int j = 0; j<c2; i++)
     {
        cin>>array2[i][j];
     }
     
    }
    if (c1!=r2)
    {
        cout<<"Matrix multiplication is not possible:";
    }
      // output ke liye use karna hai
      int array3[r1][c2];
      for (int i = 0; i <r1; i++)
      {
        for ( int j = 0; j<c2; j++)
        {
          
           int result=0;
        for (int k=0; k<r2; k++)
        {
            result+=array1[i][k]*array2[k][j];
        }
        array3[i][j]=result;
      }
      }
       for ( int i = 0; i<r1; i++)
      {
        for (int j = 0; j<c2; j++)
        {
            cout<<array3[i][j]<<endl;
        }
      }
      return 0;
      }
      