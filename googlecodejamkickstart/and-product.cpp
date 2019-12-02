#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unsigned  int a,b,i;
        unsigned int n;
        cin>>a>>b;
        n=a;
        for(i=a+1;i<=b;i++)
        {
            n = n&i;
        }
        cout << n << endl;
    }
    return 0;
}