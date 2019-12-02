#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int k = 1;
    while(T--)
    {
        int i,j,n;
        cin >> n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Test Case #" << k << ":" << endl;;
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                cout << a[j][i] << " ";
            }
            cout << endl;
        }
        k++;
    }
    return 0;
}