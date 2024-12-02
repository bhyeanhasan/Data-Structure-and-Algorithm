#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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

    selectionSort(arr,n);

    show(arr,n);

}
