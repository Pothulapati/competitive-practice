#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,k,n;
        cin >> n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> a[i][j];
            }
        }
        for(k=n-1;k>=0;k--)
        {
            int sum = 0;
            i=0; j=k;
            while(i<n&&j<n)
            {
                sum += a[i][j];
                i++;
                j++;
            }
            cout << sum << " ";
        }

        for(k=1;k<n;k++)
        {
            int sum = 0;
            i=k; j=0;
            while(i<n&&j<n)
            {
                sum += a[i][j];
                i++;
                j++;
            }
            cout << sum << " ";
        }
        cout << endl;
           

    }
    return 0;
}