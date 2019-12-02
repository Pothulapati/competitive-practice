#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int T;
    cin >> T;
    while(T--)
    {
        long long int n;
        cin >> n;
        if(n==0 || n ==2)
            cout << "No" << endl;
        else if(n&1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}