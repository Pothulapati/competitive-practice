#include<bits/stdc++.h>
using namespace std;

bool binarysearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid = l + (h-l)/2;
        if(a[mid]==key)
            return true;
        else if(a[mid] < key)
            return binarysearch(a,mid+1,h,key);
        else
            return binarysearch(a,l,mid-1,key);
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k,a,b;
        int flag  = 0;
        cin >> n >> k;
        int x[n];
        for(i=0;i<n;i++)
        {
            cin >> x[i];
            
        }
        for(i=0;i<n;i++)
        {
            a = x[0];
            b = k -a;
            if(binarysearch(i+1,n-1,b))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}