#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i,j;
        cin >> n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        i=0;
        j=0;
        int count = 0;
        while(i<n && j<n)
        {
            if(a[i] > b[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        cout << count << endl;
   }
    return 0;
}