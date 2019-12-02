#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        int i;
        cin >> n;
        int a[n];
        unordered_map<int,int> x;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            x[a[i]]++;
        }
        for(auto y = x.begin();y!=x.end();y++)
        {
            if(y->second ==2)
            {
                cout << y->first << " ";
            }
        }

    }
    return 0;
}