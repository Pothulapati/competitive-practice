#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
    int height;
};

struct node *createNode(int data)
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 0;
    return newnode;
}

int height(struct node *N) 
{ 
    if (N == NULL) 
        return 0; 
    return N->height; 
} 

struct node* insert(int data, node * root,int h)
{
    if(root == NULL)
    {
        //cout << h << " ";
        return createNode(data);
    }
    if(root->data < data)
    {
         root->right = insert(data,root->right,h+1);
    }
    else
    {
         root ->left =  insert(data,root->left,h +1);
    }
    root->height = 1 + max(height(root->left), 
                           height(root->right)); 
  
    return root;
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
            cout << root->height << " ";
        }
        cout << endl;

    }
    return 0;
}