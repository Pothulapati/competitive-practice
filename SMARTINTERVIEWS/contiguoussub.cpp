#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int count = 0;
        int max = 1;
        for(i=0;i<n-1;i++)
        {
            //cout << a[i] << " " << a[i+1] << endl;
            if(a[i] - a[i+1] == -1 )
            {
                count++;
            }
            else if(a[i] - a[i+1] == 0)
                continue;
            else
            {
                if(count > max)
                    max = count;
                count = 0;
            }
        }
        if(count > max)
            max = count;
        cout << max+1 << endl;
        
    }
}