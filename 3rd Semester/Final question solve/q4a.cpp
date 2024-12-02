#include<bits/stdc++.h>
using namespace std;


void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;

        while(key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    while(true)
    {
    int n,v;
    cin>>n;

    if(n==-1)
    {
        cout<<"Terminated";
        break;
    }

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>v;
        arr[i]=v;
    }

    insertion(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}
