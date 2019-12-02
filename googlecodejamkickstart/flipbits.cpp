#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unsigned int mask = 4294967295;
        unsigned int x;
        cin >> x;
        x = x^mask;
        cout << x << endl;
    }   
    return 0;
}