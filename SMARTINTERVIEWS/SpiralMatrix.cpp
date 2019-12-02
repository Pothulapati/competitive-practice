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
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> a[i][j];
            }
        }
        k = 0;
        int w,x,y,z;
        w=0;x=0;y=n-1;z=n-1;
        while(w<=y || x <=z )
        {
            for(i=w;i<=y;i++)
            {
                cout << a[x][i] << " ";
            }
            x++;
            for(i=x;i<=z;i++)
            {
                cout << a[i][y] << " ";
            }
            y--;
            for(i=y;i>=w;i--)
            {
                cout << a[z][i] << " "; 
            }
            z--;
            for(i=z;i>=x;i--)
            {
                cout << a[i][w] << " ";
            }
            w++;
        }
        cout << endl;
    }
    return 0;
}