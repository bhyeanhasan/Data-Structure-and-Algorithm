#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n)
{
    int c =0;
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j=i-1;

        while(key<arr[j]) // যতক্ষন পর্যন্ত key এর ভ্যালু ছোট হবে ততক্ষন এক ঘর করে ডানে যাবে
        {
            arr[j+1] = arr[j];
            j--;
            c++;
        }
        arr[j+1] = key; // key এর স্থানে এসাইন হবে
    }
    printf("NO of Comparison %d in insertion sort\n",c);
}

void selection(int arr[],int n)
{
    int c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) //key এর সাথে তার পরবর্তি সবগুলা কমপেয়ার হবে
        {
            if(arr[j]<arr[i]) //key এর থেকে ছোট পেলে ভ্যালু সোয়াপ করবে
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                c++;
            }

        }
    }
    printf("NO of Comparison %d in selection sort\n",c);
}

int main()
{
    int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n = 20;
    selection(arr,n);
    int brr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    insertion(brr,n);

    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
}
