#include<bits/stdc++.h>
using namespace std;

bool valid(int a[],int n,int m,int k)
{
    int i=0;
    int p = 1;
    int sum = 0;
    //cout << "======" << m << "=======" << endl;
    while(i<n)
    {
        if(sum + a[i] <= m)
        {
            sum += a[i];
            i++;
           // cout << endl;
        }
        else
        {
            p++;
            sum = 0;
            //cout << a[i] << " ";
            if(p>k)
                return false;
        }
    }
    if(p<=k)
        return true;
    else
        return false;
}

int binarysearch(int a[],int n,int l,int h,int k)
{
    if(l<h)
    {
        int mid = l + (h-l)/2;
        if(valid(a,n,mid,k))
            return binarysearch(a,n,l,mid,k);
        else
            return binarysearch(a,n,mid+1,h,k);
    }
    return l;
}



int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int sum =0;
        int n,k,i,j;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int l = sum/k;
        int h = sum;
        cout << binarysearch(a,n,l,h,k) << endl;
    }
    return 0;
}