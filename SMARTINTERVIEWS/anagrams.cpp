#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int sum = 0;
        int i,j;
        string a,b;
        cin >> a;
        cin >> b;
        int c[26];
        memset(c,0,sizeof(c));
        for(auto ia = a.begin();ia != a.end();ia++)
            c[*ia - 97]++;
        for(i=0;i<26;i++)
            cout << c[i];
        for(auto ia = b.begin();ia != b.end();ia++)
            c[*ia - 97]--;
        cout << endl;
        for(i=0;i<26;i++)
        {
            sum += abs(c[i]);
            cout << c[i];
        }
        cout << endl;
        cout << sum << endl;
    }
    return 0;
}