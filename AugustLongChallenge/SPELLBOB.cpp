#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,k;
        string m = "bob";
        char x[2][3];
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                cin >> x[i][j];
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0; j<3 && j!=i;j++)
            {
                for(k=0;k<3 && k!=j;k++)
                {
                    cout << i << " " << j  << " " << k;
                    cout << endl;
                }
            }
        }

    }
    return 0;
}