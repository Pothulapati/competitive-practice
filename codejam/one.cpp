#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int t = 1;
    cin >> T;
    while(T--)
    {
        int i,j,k,n;
        cin >> n;
        vector<int> a(n);
        int x;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        //sort(a,a+n);
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                    for(k=j+1;k<n;k++)
                    {
                        if( a[i] == a[j]*a[k] ||a[j] == a[i]*a[k]||a[k] == a[i]*a[j])
                        {
                            count++;
                        }
                    }
            }
        }
        cout <<"Case #" << t <<": " <<  count << endl;
        t++;
    }
    return 0;
}