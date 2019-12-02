#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,T;
    cin >> T;
    while(T--)
    {
    int c = 32;
    int count = 0;
    cin >> a >> b;
    while(c--)
    {
        if((a&1)^(b&1) == 1)
        {
            count++;
        }
        a = a>>1;
        b = b>>1;
    }
    cout << count << endl;
    }
    return 0;

}