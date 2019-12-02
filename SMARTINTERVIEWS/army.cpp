#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n;
        int c[10000];
        memset(c,0,sizeof(c));
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<pow(2,n);i++)
        {
            int sum = 0;
            int p = i;
            int k = 0;
            while(p!=0)
            {
                if(p&1 == 1)
                    sum += a[k];
                k++;
                p = p>>1;
            }
            c[sum]++;
        }       
        int flag = 0;
        for(i=1;i<10000;i++)
        {
            if(c[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}