#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int M = 1e9+7;
    while(T--)
    {
        int a,b;
        cin >> a;
        cin >> b;
        int x = a;
        long long int ans = 1;
        while(b != 0)
        {
            if(b & 1)
            {
                ans = (ans*x)%M;
            }
            x = (x*x)%M;
            b = b >> 1;
        }
        cout << ans%M << endl;;
    }
    return 0;
}