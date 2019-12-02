#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n,i;
    cin >> n;
    unsigned int x;
    x = 0;
    i = 0;
    while(i<32)
    {
        if(n & (1 << i))
          x += pow(2,31 -i);
        i++;
    }
    cout << x << endl;
    }
    return 0;
}