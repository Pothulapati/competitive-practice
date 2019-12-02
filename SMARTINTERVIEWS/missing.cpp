#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,n,sum;
        cin >> n;
        sum = ((n+1)*(n+2))/2;
        int a;
        int ssum = 0;
        for(i=0;i<n;i++)
        {
            cin >> a;
            ssum += a;
        }
        cout << sum - ssum << endl;
    }
    return 0;

}