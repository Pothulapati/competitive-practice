#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,T,n,mid,x;
    cin >> T;
    int k=1,p;
    while(T--)
    {
        cin >> n;
        mid = n/2;
        cout << "Case #" << k << ":" << endl;
        p=0;
        for(i=0;i<n;i++)
        {
            if(i<=n/2)
            {
                for(j=0;j<n;j++)
                {
                    if(j == mid-i || j == mid+i)
                            cout << "*";
                    else
                            cout << " ";

                }
            }
            else
            {
                x = i-mid;
                for(j=0;j<n;j++)
                {
                    if(j == x || j == n-x-1)
                            cout << "*";
                    else
                            cout << " ";

                }
            
            }
            cout << endl;
        }
        
        k++;
    }

    return 0;
}