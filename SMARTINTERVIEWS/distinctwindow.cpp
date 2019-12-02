#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,n,k;
        cin >> n >> k;
        int a[n];
        map<int,int> m;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<k;i++)
        {
            if(m.find(a[i]) != m.end())
                m[a[i]]++;
            else
                m[a[i]] = 1;
        }
        cout << m.size() << " ";
        for(i=1;i+k<=n;i++)
        {
            m[a[i-1]]--;
            if(m[a[i-1]] == 0)
                m.erase(a[i-1]);
            if(m.find(a[i+k-1]) == m.end())
                m[a[i+k-1]] = 1;
            else
                m[a[i+k-1]]++;
            cout << m.size() << " ";
        }
        cout << endl;

    }

    return 0;
}