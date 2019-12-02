#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int i,j,x,n;
        cin >> n;
        long long int a[n];
        long long int c[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        c[0] = a[0];
        for(i=1;i<n;i++)
        {
            c[i] = c[i-1] + a[i];
        }
        i =0;
        x = 0;
        j=0;
        int k = 0;
        while(j<n-1)
        {
            k++;
            //Do carry forward here
                j +=c[x];
                if(j>=n-1)
                    break;

            //x ix becoming j in previous iteration and j is same
            x = j;

        }
        cout << k << endl;
    }
    return 0;
}