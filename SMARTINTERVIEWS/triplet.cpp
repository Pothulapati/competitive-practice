#include<bits/stdc++.h>
using namespace std;


bool check(int a[],int n,int p)
{
    int i=0,j=0,k=0;
        for(i=0;i<n-1;i++)
        {
            j=i+1;
            k = n-1;
            while(j<k)
            {
                int sum = a[i] + a[j] + a[k];
                if(sum == p)
                    return true;
                else if (sum < p)
                    j++;
                else
                    k--;
            }

        }
        return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n,p,k;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        if(check(a,n,k))
            cout << "true" << endl;
        else
            cout << "false" << endl;

    }
    return 0;
}