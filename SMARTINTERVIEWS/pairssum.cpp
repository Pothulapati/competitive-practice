#include<bits/stdc++.h>
using namespace std;

bool binarysearch(long long int a[],int l,int h,long long int k)
{
    if(l<=h)
    {
        int mid = l + (h-l)/2;
        if(a[mid] == k)
            return true;
        else if(a[mid] > k)
            return binarysearch(a,l,mid-1,k);
        else
            return binarysearch(a,mid+1,h,k);
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int n,k,i,j;
        cin >> n;
        cin >> k;
        long long int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int flag = 0;
        for(i=0;i<n;i++)
        {
            k = k - a[i];
            for(j=i+1;j<n;j++)
            {
                k  = k - a[j];
                if(binarysearch(a,j+1,n-1,k) == true)
                {
                    cout << "true" << endl;
                    //cout << x << y << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            cout << "false" << endl;
    }
    return 0;
}