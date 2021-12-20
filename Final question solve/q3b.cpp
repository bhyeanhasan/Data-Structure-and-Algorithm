#include<bits/stdc++.h>
using namespace std;

int top = -1;

void push(char arr[],char key)
{
    top++;
    arr[top] = key;
}
int pop(char arr[])
{
    int poped = arr[top];
    top--;
    return poped;
}

int check(char Stack[],char arr[])
{
    int length = strlen(arr);
    int mid = length/2;

    for(int i=0;i<mid;i++)
    {
        push(Stack,arr[i]);
    }

    for(int i=mid+1;i<length;i++)
    {
        if (pop(Stack) != arr[i])
        {
            return -1;
        }
    }
    return 1;
}


int main()
{
    char Stack[1000];
    int is =check(Stack,"noyon");
    if(is == -1)
        cout<<"False";
    else
        cout<<"True";

}
