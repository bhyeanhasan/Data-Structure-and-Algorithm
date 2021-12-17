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

    void delete_node(int key)
    {
        Node *ptr = head;
        Node *entry = new Node(key);

        while(ptr != NULL)
        {
            if(ptr.data == key)
            {

            }
            ptr = ptr->next;
        }

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
}
