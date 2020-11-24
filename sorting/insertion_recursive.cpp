#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void insertion(int* arr,int n)
{
    if(n<=1)
        return;

    insertion(arr,n-1);

    int l=arr[n-1];
    int i=n-2;

    while(i>=0&&arr[i]>l)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=l;
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

    insertion(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
