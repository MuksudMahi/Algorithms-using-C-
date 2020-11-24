#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void insertion(int* arr,int n)
{
    int i,j;
    for(i=1; i<n; i++)
    {
        int k=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
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

    insertion(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

