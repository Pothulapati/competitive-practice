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
    {
        return createNode(data);
    }
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

void levelorder(struct node *root)
{
    queue<struct node *> m;
    m.push(root);
    m.push(NULL);
    int level = 0;
    while(m.size() > 1)
    {
        struct node *x = m.front();
        m.pop();
        if(x!= NULL)
        cout << x->data << " ";
        else
        {
            m.push(NULL);
            level++;
            cout << endl;
        }
        if(x!= NULL)
        {
            if(x->left != NULL)
                m.push(x->left);
            if(x->right != NULL)
                m.push(x->right);
            }
    }
}

void printlevel(struct node *root, int level)
{
    if(root == NULL)
        return;
    if(level == 0)
        cout << root->data << " ";
    
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
}

int height(struct node* root)
{
    if(root == NULL)
        return -1;
    
    int l = height(root->left) + 1;
    int r = height(root->right) + 1;

    return l>r?l:r;
}

void bottomuplevel(struct node *root)
{
    int x = height(root);

    while(x >=0)
    {
        printlevel(root,x);
        cout << endl;

        x--;
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
        bottomuplevel(root);
        cout << endl;
    }

    return 0;
}