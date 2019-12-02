#include <bits/stdc++.h>
using namespace std;

int maxSubArraySun(int a[], int size)
{
   int max_ending,i = 0;
   int  max_so_far = INT_MIN;
    for(i=0;i<size;i++)
    {
        max_ending = max_ending + a[i];
        if(max_so_far < max_ending)
        {
            max_so_far = max_ending;
        }
        if(max_ending < 0)
        {
            max_ending = 0;
        }
    }
    return max_so_far;

}
int MaxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
       cin >> a[i];
    cout << maxSubArraySun(a,n);
     return 0;
}