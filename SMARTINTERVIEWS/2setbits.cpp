#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int n,i,j,x,y,sum;
        unsigned int M = 1e9+7;
        cin >> n;
        x = 1;
        i=0;
        while(i<n)
        {
            sum = 0;
            y = 0;
            while(y<x)
            {
                sum = (1<<x)%M + (1<<y)%M;
                y++;
                i++;
                if(i==n)
                {
                    cout << sum%M << endl;
                    break;
                }
            }
            x++;
        }

    }
    return 0;
}