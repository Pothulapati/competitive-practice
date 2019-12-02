#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,k,n;
        cin >> n;
        int a[n];
        int ans = 0;
        int sum = 0;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
        {
            sum = 0;
            for(j=i;j<n;j++)
            {
                sum += a[j];
                if(sum == 0)
                {
                    ans = max(ans,j-i+1);
                }
            }
        }
        cout << ans << endl;

        
    }
    return 0;
}