#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n,m;
        cin >> n >> m;
        int c[(int)sqrt(m)+1];
        vector<int> primes;
        memset(c,0,sizeof(c));
        c[0] = 1;
        c[1] = 1;
        int count = 0;
        for(i=2;i<=sqrt(m);i++)
        {
            if(c[i] == 0)
            {
                primes.push_back(i);
                for(j = 2;j*i<=m;j+=1)
                {
                    c[j*i] = 1;
                }
            }
        }
        int pr[m-n+1];
        memset(pr,0,sizeof(pr));
        for(auto ip = primes.begin(); ip != primes.end(); ip++)
        {
            for(j = ((*ip -n%*ip)%*ip); j < m-n;j=j+*ip)
            {
                cout << *ip << " " << j << endl;
                pr[j] = 1;
            }
        }

        for(i=0;i<m-n;i++)
        {
            if(pr[j] == 0)
                count++;
        }

        cout << count << endl;


    }
    return 0;
}