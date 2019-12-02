#include <bits/stdc++.h>
using namespace std;

int countSubarrays(int a[], int n, int m)
{
    int count = 0;
    int prefix[n] = { 0 };
    int odd = 0;
 
    // traverse in the array
    for (int i = 0; i < n; i++) 
    {
 
        prefix[odd]++;
 
        // if array element is odd
        if (a[i] & 1)
            odd++;
 
        // when number of odd elements>=M
        if (odd >= m)
            count += prefix[odd - m];
    }
 
    return count;
}

int main()
{
    int a[] = { 1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    int m = 1;
    int sum =0;
    for(int i=0;i<=m;i++)
        sum += countSubarrays(a, n, i);
    cout << sum;
    return 0;
}