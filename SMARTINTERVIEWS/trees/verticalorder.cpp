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

int height(struct node* root)
{
    if(root == NULL)
        return -1;
    
    int l = height(root->left) + 1;
    int r = height(root->right) + 1;

    return l>r?l:r;
}

//Find Left length and right length

void printverticallevel(struct node* root, int l)
{
    if(root != NULL)
    {
        if(l == 0)
            cout << root->data << " ";
        printverticallevel(root->left,l+1);
        printverticallevel(root->right,l-1);
        
    }
}

void verticalorder(struct node* root,int l)
{
    int i;
    for(i= -l; i <=l;i++)
    {
        printverticallevel(root,i);
        cout << endl;
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
        verticalorder(root,5);

    }

    return 0;
}