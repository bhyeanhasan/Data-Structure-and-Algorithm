#include<bits/stdc++.h>
using namespace std;

int FRONT = -1;
int REAR = -1;
int Size = 10;

void push(int Queue[],int element)
{
    if(FRONT == -1)
    {
        FRONT = 0;
        REAR = 0;
        Queue[FRONT] = element;
    }
    else
    {
        FRONT++;

        if(FRONT == Size)
        {
            cout<<"Queue Full"<<endl;
        }
        else
        {
            Queue[FRONT] = element;
        }
    }
}

int pop(int Queue[])
{
    if (REAR>Size)
    {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else
    {
        int poped = Queue[REAR];
        REAR++;
        return poped;
    }
}


void show(int arr[])
{
    for(int i=REAR;i<=FRONT;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int Queue[10];
    push(Queue,100);
    push(Queue,4);
    push(Queue,5);
    show(Queue);
    cout<<pop(Queue)<<endl;
    show(Queue);
}

