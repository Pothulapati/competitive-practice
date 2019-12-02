#include<bits/stdc++.h>
using namespace std;

int check(char x)
{
    if(x == 'd' || x == 'f')
        return 0;
    else
        return 1;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n,curr;
        unordered_map<string,float> cs;
        cin >> n;
        string x[n];
        for(i=0;i<n;i++)
        {
            cin >> x[i];
        }
        float sum = 0;
        float cost = 0;
        for(i=0;i<n;i++)
        {
            if(cs.find(x[i]) == cs.end())
            {
                cost = 0.2;
                curr = check(x[i][0]);
                for(j=1;j<x[i].size();j++)
                {
                    int p = check(x[i][j]);
                    if(curr!=p)
                        cost += 0.2;
                    else
                        cost += 0.4;
                    curr = p;
                }
                cs[x[i]] = cost;
            }
            else
            {
                cost = cs[x[i]]/2;
            }
            //cout << x[i] << " " << cost << endl;
            sum += cost;
        }
        cout << sum*10 << endl;
    }
    return 0;
}