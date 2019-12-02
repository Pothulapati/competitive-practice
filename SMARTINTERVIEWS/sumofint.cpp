#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,i;
    cin >> T;
    while(T--)
    {
        long long k;
        long long sum = 0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> k;
            sum +=k;
        }
        cout << sum << endl;
    }

    return 0;
}