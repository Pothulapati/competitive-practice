#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,n,x;
        map<int,int> h;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(h.find(x) != h.end())
                h[x]++;
            else
                h[x]=0;
        }
        int size = 0;
        for(i=1;i<=n;i++)
        {
            if(h.find(i) != h.end())
            {
                h[i]--;
                if(h[i] == 0)
                    h.erase(i);
            }
            else
                size++;
        }
        cout << size << endl;
    }
    return 0;
}