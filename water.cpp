#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    while(N--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int lmax[n], rmax[n];
        lmax[0] = 0;
        for(int i =1;i<n;i++)
            lmax[i] = max(lmax[i-1], a[i]);
        rmax[n-1] = 0;
        for(int i=n-1;i>0;i--)
            rmax[i] = max(rmax[i], a[i]);

        int total = 0;
        for(int i = 0;i<n; i++)
        {
            int cur = min(lmax[i], rmax[i]) - a [i];
            total += cur;
        }
        cout << total;
    }  
    return 0;
}
