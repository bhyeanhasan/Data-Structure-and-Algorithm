#include<bits/stdc++.h>
using namespace std;

int ptr=-1;

void addheapify(int heap[])
{
    for(int i=ptr; i>=0; i--)
    {
        int parent = i/2;

        if(heap[i]>heap[parent])
        {
            int temp = heap[i];
            heap[i] = heap[parent];
            heap[parent] = temp;
        }
    }

}

void add(int heap[],int key)
{
    if(ptr == -1)
    {
        ptr=0;
        heap[ptr] = key;
    }
    else
    {
        ptr++;

        heap[ptr]=key;

        addheapify(heap);

    }

}

void Delete(int heap[])
{
    int temp = heap[0];
    heap[0] = heap[ptr];
    heap[ptr] = temp;

    ptr--;
    addheapify(heap);
}

int main()
{
    int heap[100];

    add(heap,44);
    add(heap,30);
    add(heap,50);
    add(heap,22);
    add(heap,60);
    add(heap,55);
    add(heap,77);
    add(heap,55);

    int x = ptr;

    Delete(heap);

    while(ptr>0)
    {
        Delete(heap);
    }

    for(int i=0; i<8; i++)
    {

        cout<<heap[i]<<" ";

    }
}
