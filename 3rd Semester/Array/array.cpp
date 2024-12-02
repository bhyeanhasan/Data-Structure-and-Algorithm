#include<bits/stdc++.h>
using namespace std;

void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}

int main()
{
    int arr[100] = {100,200,300,400,500,600,700,800,900};
    int n =9;
    show(arr,9);

    for(int i =n;i>4;i--)
    {
        arr[i+1]=arr[i];
    }
    show(arr,10);
}
