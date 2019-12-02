#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,flag;
    cin >> T;
    while(T--)
    {
        int n,a[32];
        cin >> n;
        i = 1;
        flag = 0;
        while(i <= 32)
        {
            if(n & (1 << 31))
            {
            
                cout << 1;
                flag = 1;
            }
            else
            {
                if(flag == 1)
                    cout << 0;
            }
            n = n << 1;
            i++;
        }
        cout << endl;
    }
    return 0;
}