#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long int n,i,count;
        int max = -1;
        count = 0;
        cin >> n;
        i = 64;
        while(i--)
        {
            if(n&1)
            {
                count++;

 
            }
            else
            {
                if(count > max)
                    max = count;
                count = 0;
            }
                            n = n>>1;
        }
        cout << max << endl;

    }
    return 0;
}