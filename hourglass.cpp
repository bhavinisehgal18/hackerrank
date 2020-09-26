#include <bits/stdc++.h>
#include <iostream>
using namespace std;

    
int main()
{
  //int sum = 0;  
  int row=6;
  int col=6;
  int i,j;
  int arr[row][col];
    for( i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           cin>>arr[i][j];
       }
   }
   cout<<"------------------------"<<endl;
   for(i=0; i<row; i++)
   {
       for( j=0; j<col; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
   int sum;
   int max = -100;
   for( i=0; i<row-2; i++)
   {
       for(j=0; j<col-2; j++)
       {
        sum =arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           if(sum>max)
               max=sum;
       }
   }
   cout<<max;
   

  return 0;
}
