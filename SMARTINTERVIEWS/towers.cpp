#include<bits/stdc++.h>
using namespace std;

void towersofhannoi(int n,char s,char d,char t)
{
    if(n>=1)
    {
        towersofhannoi(n-1,s,t,d);
        cout << "Move " << n << " from " <<  s << " to " << d << endl;
        towersofhannoi(n-1,t,d,s);
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        if(n==1)
            cout << n << endl;
        else
        cout << n*2+1 << endl;
        towersofhannoi(n,'A','C','B');
    }
    return 0;
}