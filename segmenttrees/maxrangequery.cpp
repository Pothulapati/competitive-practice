#include<bits/stdc++.h>
using namespace std;

void create(int a[],int c[],int node,int start, int end,function<int(int,int)> fun)
{
    int x,y;
    printf("At Node %d\n",node);
    if(start == end)
    {
        c[node] = a[start];
        return ;
    }
    int mid = (start +end) /2;
    create(a,c,2*node+1,start,mid,fun);
    create(a,c,2*node+2,mid+1,end,fun);
    c[node] = fun(c[2*node+1],c[2*node+2]);
}

int sum(int x,int y)
{
    return x+y;
}

int maxim(int x,int y)
{
    return x>y?x:y;
}

int query(int c[],int n,int start,int end,int l,int r,function<int(int,int)> func)
{
    if(r < start || l > end)
    {
        return 0;
    }
    else if(l <= start && end <= r)
    {
        return c[n];
    }

    int mid = (start  + end)/2;
    int p1 = query(c,2*n+1,start,mid,l,r,func);
    int p2 = query(c,2*n+2,mid +1, end,l,r,func);
    return func(p1,p2);
}


int main()
{
    int i,n;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    //Create a Segment Tree i.e Binary Tree using Array
    int c[2*n];
    create(a,c,0,0,n-1,maxim);
    int q;
    int p,s;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> p;
        cin >> s;
        printf("%d",query(c,0,0,n-1,p,s,maxim));
    }
    return 0;
}