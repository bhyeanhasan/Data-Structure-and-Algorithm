#include<bits/stdc++.h>
using namespace std;

int bin(int arr[],int low, int high, int key)
{
    while(low<high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {3,6,21,25,32,37,41,49,50,53,56,58,65,72,75};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low =0;
    int high =n-1;
    int key = 25;

    int loc = bin(arr,low,high,key);

    cout<<++loc;
}
