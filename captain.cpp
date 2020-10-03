#include <iostream>
using namespace std;
void leader(int arr[], int n)
{ 
    for (int i=0; i<n; i++)
    {
        int j;
        for(j =i+1;j<n;j++)
        {
            if (arr[j]>arr[i])
                break;
        }
        if(j==n)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int t;
    cin>>t;
    int n;
    while(t!=0)
    {
        cin>>n;
        int arr[n];
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }
    leader(arr,n);
    t--;
    }
    return 0;
}