#include<bits/stdc++.h>
using namespace std;

int top = -1;
int Size = 10;

void push(int Stack[],int element)
{
    if(top == -1)
    {
        top = 0;
        Stack[top] = element;
    }
    else
    {
        top++;

        if(top == Size)
        {
            cout<<"Stack Full"<<endl;
        }
        else
        {
            Stack[top] = element;
        }
    }
}

int pop(int Stack[])
{
    if (top<0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    {
        int poped = Stack[top];
        top--;
        return poped;
    }
}


void show(int arr[])
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int Stack[10];
    push(Stack,100);
    push(Stack,4);
    push(Stack,5);
    show(Stack);
    cout<<pop(Stack)<<endl;
    show(Stack);
}
