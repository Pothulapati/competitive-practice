#include<bits/stdc++.h>
using namespace std;

unsigned long long int countbits(long long int n)
{
    unsigned long long int count,cur;
    cur = 0;
    while(n)
    {
        if((n&1) == 0)
            cur++;
        n = n>>1;
    }
    return cur;
}

int main()
{
   long long int T;
    cin >> T;
    while(T--)
    {
        unsigned long long int x;
        unsigned long long int N;
        cin >> N;
         x = countbits(N);
         //cout << x << endl;;l
        cout << pow(2,x)-1 << endl;
    }
    return 0;
}