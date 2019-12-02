#include<bits/stdc++.h>
using namespace std;

int contains(string s, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i] == '*')
            return i;
    }
    return -1;
}

int main()
{
    int n,m,i,j,k;
    string s,t;
    cin >> n >> m;
    cin >> s;
    cin >> t;
    int x;
    int front=0;
    int back = 0;
    if((x = contains(s,n))==-1)
    {
        if(s==t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        //cout << x << endl;

        for(i=0;i<x;i++)
        {
            if(s[i] != t[i])
            {
                front = 1;
                break;
            }
        }
        k = i-1;
        i = n-1;
        j = m-1;
        cout << k << endl;
        while(j>x)
        {
            if(s[i] != t[j] || j <= k)
            {
                back = 1;
                break;
            }
            i--;
            j--;
        }
        cout << j << endl;
        if(front==0 && back == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}