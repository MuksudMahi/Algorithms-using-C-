#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void bubble(int* arr,int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>=arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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

    bubble(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
