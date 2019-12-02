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
        for(i=0;i<n;i++)
            cin >> a[i];
        
        int sum = 0;
        for(i=0;i<n-1;i++)
        {
            int count = 0;
            for(j=i+1;j<n;j++)
            {
                if(a[j] < a[i])
                    count++;
            }
            sum+=count;
        }
        cout << sum << endl;
    }
    return 0;
}