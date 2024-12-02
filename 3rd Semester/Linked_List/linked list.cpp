#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class linked_list
{
public:
    Node *head,*PTR;
    linked_list()
    {
        head = NULL;
        PTR = NULL;
    }

    void add_node(int newData)
    {
        Node *node = new Node(newData);

        if(head == NULL)
        {
            head = node;
            PTR = node;
        }
        else
        {
            PTR->next = node;
            PTR = PTR->next;
        }
    }

    void show()
    {

        Node *ptr = head;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }

    void delete_node(int loc)
    {
        Node *ptr = head;
        Node *parent;

        for(int i=1;i<loc;i++)
        {
            parent = ptr;
            ptr = ptr->next;
        }
        parent->next = ptr->next;

    }

    void add_after(int loc,int key)
    {
        Node *ptr = head;
        Node *new_node = new Node(key);
        Node *parent;

        for(int i=1;i<loc;i++)
        {
            parent = ptr;
            ptr = ptr->next;
        }
        parent->next = new_node;
        new_node->next = ptr;

    }

};

int main()

{
    linked_list ll;

    cout<<"How Many Node?"<<endl;
    int n,val;
    cin>>n;
    cout<<"Enter Values:"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>val;
        ll.add_node(val);
    }

    ll.show();
    ll.delete_node(3);
    ll.show();
    ll.add_after(3,100);
    ll.show();
}
