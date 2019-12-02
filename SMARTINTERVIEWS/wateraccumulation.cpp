#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n;
        cin >>n;
        int a[n];
        int lmax[n],rmax[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        lmax[0] = a[0];
        for(i=1;i<n;i++)
            lmax[i] = max(lmax[i-1],a[i]);
        rmax[n-1] = a[n-1];
        for(i=n-2;i>=0;i--)
            rmax[i] = max(rmax[i+1],a[i]);
        int sum = 0;
        for(i=1;i<n-1;i++)
            sum += min(lmax[i],rmax[i]) - a[i];
        cout << sum << endl;
    }
    return 0;
}