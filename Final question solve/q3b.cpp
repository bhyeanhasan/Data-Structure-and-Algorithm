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



    for(int i=0;i<mid+(length%2);i++)
    {
        cout<<arr[i]<<" ";
        push(Stack,arr[i]); //মাঝের আগ পর্যন্ত স্ট্যাকে ঢুকবে
    }

    cout<<endl;

    for(int i=mid;i<length;i++)
    {
        cout<<arr[i]<<endl;
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
    int is =check(Stack,"nonon");
    if(is == -1)
        cout<<"False";
    else
        cout<<"True";

}
