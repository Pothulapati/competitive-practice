#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    map<int,int> hs;
    cin >> n;
    i=0;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int T;
    cin >> T;
    int q[T];
    int q1[T];
    for(i=0;i<T;i++)
    {
        cin >> q[i];
        q1[i] = q[i];
    }
    sort(q,q+T);
    i=0;j=0;
    int mx = INT_MIN;
    while(j<T)
    {
        while(a[i]<=q[j] && i <n)
        {
            mx = a[i];
            i++;
        }
        hs[q[j]] = mx;
        j++;
    }
    for(i=0;i<T;i++)
        cout << hs[q1[i]] << endl;
        
    return 0;
}