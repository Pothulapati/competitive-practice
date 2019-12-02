#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n;
    cin >> n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    long long int sum = 0;
    for(i=0;i<n;i++)
    {
        long long int o = a[i];
        sum += o;
        for(j=i+1;j<n;j++)
        {
            o = o|a[j];
            sum = sum + o;
            //cout << "inside" << o;
        }
        //cout << endl;
    }
    cout << sum << endl;
    return 0;
}