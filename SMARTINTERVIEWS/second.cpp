#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    unsigned int M = 1e9+7;
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1))%M;
}

int main()
{
    unsigned int M = 1e9+7;
    int A,B,x;
    int count = 0;
    cin >> A >> B;
    int ans= 1;
    x = factorial(B)/factorial(B-A); 
    cout << x << endl;
    return 0;
}