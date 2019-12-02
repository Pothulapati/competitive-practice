#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >>  T;
    while(T--)
    {
        int i,j,n;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        int count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j] > a[j+1])
                {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}