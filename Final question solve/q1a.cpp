
#include<bits/stdc++.h>
using namespace std;

void Delete( string arr[8],string name,int n)
{
    int place;
    for(int i=0;i<n;i++)
    {
        if (arr[i] == name)
        {
            place = i;
            break;
        }
    }

    for(int i=place;i>n;i++)
    {
        arr[i] = arr[i+1];
    }
}

void show(string arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
     string arr[8] = {"Brown","Davis","Johnson","Smith","Wanger"};
     Delete(arr,"Davis",8);

    show(arr,9);

}
