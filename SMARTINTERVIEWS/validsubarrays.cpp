#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n;
        cin >> n;
        int a[n];
        int c[2];

        for(i=0;i<n;i++)
            cin >> a[i];
        int count = 0;
       /* for(i=0;i<n;i++)
        {
            c[0] = 0;
            c[1] = 0; 
            for(j=i;j<n;j++)
            {
                c[a[j]]++;
                if(c[0] == c[1])
                    count++;
            }
        }
        cout << count << endl;
        */
        //Using prefix , by replacing 1 with -1 and search for same indexes

    }
    return 0;
}