#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long long int c[86401];
    while(T--)
    {
        memset(c,0,sizeof(c));
        long long int n;
        long long int i,j;
        cin >> n;
        long long int a[n],d[n];
        int maxx = 0;
        for(i=0;i<n;i++)
        {
            cin  >> a[i] >> d[i];
            //cout << a[i] << d[i];
            for(j=a[i];j<=d[i];j++)
            {
                c[j]++;
                if(c[j] > maxx)
                    maxx = c[j];
            }
        }
    
        cout << maxx << endl;
    }
    return 0;
}