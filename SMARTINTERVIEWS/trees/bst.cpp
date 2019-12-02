#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node *createNode(int data)
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}



struct node* insert(int data, node * root)
{
    if(root == NULL)
        return createNode(data);
    if(root->data < data)
         root->right = insert(data,root->right);
    else
         root ->left =  insert(data,root->left);
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout << root-> data << " ";
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout << root-> data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root-> data << " ";
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a,n;
        cin >> n;
        int i;
        cin >> i;
        struct node* root = createNode(i);
        for(i=0;i<n-1;i++)
        {
            cin >> a;
            insert(a,root);
        }
        preorder(root);
        cout << endl;
        inorder(root);
        cout << endl;
        postorder(root);
        cout << endl;
        cout << endl;

    }
    return 0;
}