
#include <bits/stdc++.h>
using namespace std;

int evenSubarray(vector<int> numbers,int k)
{
    int sum=0;
    int n = numbers.size();
    for(int i=0;i<=k;i++)
    {
        int count = 0,odd = 0,j=0;
        vector<int> odds(n);
        fill(odds.begin(),odds.end(),0);
        for(j=0;j < n;j++) 
        {
            odds[odd]++;
            if (numbers[j]%2!=0)
                odd++;
            if (odd >= k)
                count += odds[odd - i];
        }
        sum += count;
    }
    return sum;
}

int main()
{
   // int a[] = { 1,2,3,4};
    vector<int> a = {1,2,3,4};
   // for(int i=0;i<=m;i++)
     //   sum += countSubarrays(a, n, i);
    //cout << sum;

    cout << evenSubarray(a,2);
    return 0;
}