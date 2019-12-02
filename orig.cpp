
#include <bits/stdc++.h>
using namespace std;

int countSubarrays(int a[], int m)
{
    int count = 0;
    int n= 4;
    int prefix[n];
    int sum =0;
    int odd = 0;
    for(int i=0;i<=m;i++)
     {
    // traverse in the array
        for (int i = 0; i < n; i++) 
        {
            prefix[odd]++;
            if (a[i]%2!= 0)
                odd++;
            if (odd >= m)
                count += prefix[odd - m];
        }
        sum +=count;
     }
    return sum;
}

int main()
{
    int a[] = { 1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    int m = 2;
    int sum =0;
    sum = countSubarrays(a, m);
    cout << sum;
    return 0;
}