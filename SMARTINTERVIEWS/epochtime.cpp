#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--)
    {
        int n,i;
        cin >> n;
        int a[n+1];
        int c[n+2];
        memset(c,0,sizeof(c));
        for(i=0;i<=n;i++)
            cin >> a[i];
        for(i=0;i<=n;i++)
        {
            c[a[i]]++;
        }
        for(i=1;i<=n+1;i++)
        {
            if(c[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    
    return 0;
}
