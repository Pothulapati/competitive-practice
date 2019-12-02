#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int r,c,i,j,k,l;
        int found = 0;
        cin >> r >> c;
        string str[r];
        int a[r][c];
        int row[r],col[c];
        memset(row,0,sizeof(row[0])*r);
        memset(col,0,sizeof(col[0])*c);
        for(i=0;i<r;i++)
            cin >> str[i];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j] = str[i][j] - '0';
                if(a[i][j] == 1)
                {    
                    found=1;
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        cout << endl;





        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(!found)
                    cout << -1;
                else
                {
                    if(a[i][j] == 1)
                        cout << 0;
                    else if (row[i] || col[j])
                        cout << 1;
                    else
                        cout << 2;
                }   
                cout << " ";
                
            }
            cout << endl;
        }
        


    }
    return 0;
}