#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int a[n];
    int min;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    min = a[0];
    int count = 0;
    i=0;
    while(i<n)
    {
        if(min != a[i])
            count++;
        else
            i++;
        min++;
    }
    cout << count << endl;
    return 0;
}