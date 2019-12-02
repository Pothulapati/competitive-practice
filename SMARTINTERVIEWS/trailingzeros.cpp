#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int n;
        cin >> n;
        int count = 0;
        while(n!= 0)
        {
            if(n & 1)
                count++;
           n =  n >> 1;
           // cout << n << endl;
        }
        if(count == 1)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}