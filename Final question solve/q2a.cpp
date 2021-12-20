#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left,*right;

    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node *tree = new Node(1);
    Node *node2 = new Node(12);
    Node *node3 = new Node(9);
    Node *node4 = new Node(5);
    Node *node5 = new Node(6);


    tree->left = node2;
    tree->right = node3;

    node2->left = node4;
    node2->right = node5;

    preorder(tree);
    cout<<endl;
    inorder(tree);
    cout<<endl;
    postorder(tree);
    cout<<endl;
}
