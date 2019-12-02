#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i;
        string s;
        cin >> s;
        int a[26];
        memset(a,0,sizeof(a));
        for(i=0;i<s.size();i++)
        {
            //cout << (s[i] - 97) << endl;
            a[s[i] - 97]++;
        }
        int max = a[0];
        for(i=1;i<26;i++)
        {
           // cout << a[i] << endl;
            if(a[i] > max)
            {
                max = a[i];
            }
        }
        cout << (s.size() - max)<< endl;

    }
    return 0;
}