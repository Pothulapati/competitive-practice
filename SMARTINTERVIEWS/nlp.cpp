#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i, n, k;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int sum = 0;
        for(i=n-k;i<n;i++)
            sum += a[i];
        cout <<  sum << endl;

    }
    return 0;
}