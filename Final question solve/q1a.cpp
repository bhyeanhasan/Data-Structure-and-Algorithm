
#include<bits/stdc++.h>
using namespace std;

string arr[8] = {"Brown","Davis","Johnson","Smith","Wanger"};
int n=4;

void Delete( string arr[],string name)
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
    n--;
}

void add(string name)
{
    n++;
    arr[n]=name;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(int(arr[i][0]) < int(arr[j][0]))
            {

                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

}

void show(string arr[])
{
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main()
{
    show(arr);
    add("Ford");
    add("Taylor");

    show(arr);

    Delete(arr,"Davis");

    show(arr);

}
