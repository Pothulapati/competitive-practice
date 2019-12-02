#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int> numbers, int m)
{
    int n = numbers.size();
    int sum = 0;
    //Traverse number of odd elements
    for(int j=0;j<=m;j++)
    {
        int count = 0;
        vector<int> odds(n);
        int odd = 0;
        //Traverse array
        for (int i = 0; i < n; i++) 
        {
                odds[odd]++;
                if (numbers[i]%2!=0)
                    odd++;
                if (odd >= j)
                    count += odds[odd - j];
        }
        sum += count;
    }
    return sum;
}

int main()
{
    int a[] = { 1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    int m = 1;
    int sum =0;
    sum = countSubarrays({1,2,3,4},m);
    cout << sum;
    return 0;
}