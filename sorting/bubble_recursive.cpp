
#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void bubble(int* arr,int n)
{
    if(n==1)
        return;

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>=arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    bubble(arr,n-1);
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

    bubble(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
