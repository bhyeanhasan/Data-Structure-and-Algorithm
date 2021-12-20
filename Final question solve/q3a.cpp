#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Num of vertex?"<<endl;
    cin>>n;
    cout<<"Num of edge?"<<endl;
    cin>>m;

    int graph[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            graph[i][j]=0;
        }
    }

    int x,y;

    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        x--;
        y--;
        graph[x][y]= 1;
        graph[y][x]= 1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
