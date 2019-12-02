#include <bits/stdc++.h>
using namespace std;

int track(int a[],int n,int m)
{
    int i,j,k,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum =0;
            int s=0;
            for(k=i;k<=j;k++)
            {
                sum += a[k];
                s++;
            }
            if(sum%m ==0 && s!=n)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,i;
        cin >> n;
        cin >> m;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
       cout << track(a,n,m) << endl;
    }

    return 0;
}