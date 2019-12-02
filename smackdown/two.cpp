#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i,j,k;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n,greater<int>());
        int q = a[k+1];
        int total = k;
        for(i=k-1;i<n && a[i] == a[i+1];i++)
            total += 1;
        cout << total << endl;
        

        //sort in descending maybe
    }
    return 0;
}