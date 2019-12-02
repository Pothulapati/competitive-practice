#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while(T--)
    {
        long long int i,n,k,x;
        cin >> n >> k;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(k >= x)
            {
                k = k - x;
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}