#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void selection(int* arr,int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        int m=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<=arr[m])
            {
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}

int main()
{
    int arr[SIZE],n;

    cout<<"Number of elements: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selection(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
