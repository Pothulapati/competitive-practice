#include<bits/stdc++.h>
using namespace std;


unsigned long long int reverse(unsigned long long int x)
{
    unsigned long long int val;
    int p;
    val = 0;
    while(x!=0)
    {
        p = x%10;
        val = val*10 + p;
        x= x/10;
    }
    return val;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unsigned long long int a,b;
        cin >> a >> b;
        a = reverse(a);
        b = reverse(b);
        cout << a << " " << b << endl;
        cout << a+b<< endl;
        
    }
    return 0;
}