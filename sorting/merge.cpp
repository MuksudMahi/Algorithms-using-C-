
#include<bits/stdc++.h>
#define SIZE 100
using namespace std;

void merging(int* arr,int l,int m,int r)
{
    int s1=m-l+1;
    int s2=r-m;
    int L[s1],R[s2];
    for(int i=0; i<s1; i++)
    {
        L[i]=arr[l+i];
    }
    for(int i=0; i<s2; i++)
    {
        R[i]=arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<s1&&j<s2)
    {
        if(L[i]>=R[j])
        {
            arr[k]=R[j];
            j++;
        }
        else
        {
            arr[k]=L[i];
            i++;
        }
        k++;
    }
    while(i<s1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }

}

void sorting(int*arr,int n)
{
    int i,j;
    for(i=1; i<=n-1; i=i*2)
    {
        for(j=0; j<n-1; j=j+i*2)
        {
            int m=min(j+i-1,n-1);
            int r=min(j+i*2-1,n-1);
            merging(arr,j,m,r);
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

    sorting(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
