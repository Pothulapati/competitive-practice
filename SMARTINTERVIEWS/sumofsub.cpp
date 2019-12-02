#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int i,j,n;
    cin >> n;
    long long int a[n];
   long long int sum[n+1];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sum[0] = a[0];
    for(i=1;i<n;i++)
    {
        sum[i] = sum[i-1] + a[i];
    }
   long long int T;
    cin >> T;
    while(T--)
    {
       long long  int a,b;
        cin >> a >> b;
        if(a!=0)
            cout << (sum[b] - sum[a-1]) << endl;
        else
            cout << sum[b] << endl;
    }
    return 0;
}