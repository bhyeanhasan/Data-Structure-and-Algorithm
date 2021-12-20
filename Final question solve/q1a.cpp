
#include<bits/stdc++.h>
using namespace std;

void Delete( string arr[],string name,int n)
{
    int place;
    for(int i=0; i<n; i++)
    {
        if (arr[i] == name)
        {
            place = i;
            break;
        }
    }

    for(int i=place; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
}

void add(string arr[],string name, int n)
{
    arr[n] = name;

    for(int i=0; i<n; i++)
    {
        if(arr[i][0] > arr[i+1][0])
        {
            string temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void show(string arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    string arr[8] = {"Brown","Davis","Johnson","Smith","Wanger"};

    int n=5;

    add(arr,"Ford",n);
    n++;
    add(arr,"Taylor",n);

    Delete(arr,"Davis",n);

    show(arr,n);

}
