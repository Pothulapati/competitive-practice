#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int i;
    int c[100+1] = {0};
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    int count = 0;
    for(i=1;i<=100;i++)
    {
        //cout << c[i] << endl;
        if(c[i]!=0)
        {
            if(c[i]%2==0)
                count += c[i]/2;
            else
                count += (c[i]-1)/2;
        }
    }
    cout << count << endl;

    return 0;
}