#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;

        while(arr[j]>key && j>=0)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }
}

void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    cout<<"How Many Node?"<<endl;
    int n,val;
    cin>>n;
    int arr[n];
    cout<<"Enter Values:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        arr[i]=val;
    }
    show(arr,n);

    quickSort(arr,n);

    show(arr,n);

}

