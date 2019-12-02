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



struct node* insert(int data, node * root,int depth)
{
    if(root == NULL)
    {
        cout << depth << " ";
        return createNode(data);
    }

    if(root->data < data)
         root->right = insert(data,root->right,depth +1);
    else
         root ->left =  insert(data,root->left,depth + 1);
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

void depthofnodes(struct node* root, int depth)
{
    if(root == NULL)
        return;
    cout << depth << " ";
    depthofnodes(root->left,depth+1);
    depthofnodes(root->right,depth+1);
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
        cout << 0 << " ";
        for(i=0;i<n-1;i++)
        {
            cin >> a;
            insert(a,root,0);
        }
        //depthofnodes(root,0);
        cout << endl;
    }

    return 0;
}