#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m,i;
    cin >> n;
    cin >> m;
    int min;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<m;i++)
        cin >> b[i];
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    int x = min-1;
    cout << n*3 << endl;
    int sum =0;
    for(i=0;i<m;i++)
    {
        if(b[i] <= x)
            sum += 2;
        else
            sum +=3;
    }
    cout << sum << endl;
    return 0;
}