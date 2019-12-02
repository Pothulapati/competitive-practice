// C++ program to count numbers whose bitwise
// XOR and sum with x are equal
#include <bits/stdc++.h>
using namespace std;
 
// Function to find total 0 bit in a number
unsigned int CountZeroBit(int x)
{
    unsigned int count = 0;
    while (x)
    {
       if (!(x & 1))
           count++;
       x >>= 1;
    }
    return count;
}
 
// Function to find Count of non-negative numbers
// less than or equal to x, whose bitwise XOR and
// SUM with x are equal.
int CountXORandSumEqual(int x)
{
    // count number of zero bit in x
    int count = CountZeroBit(x);
 
    // power of 2 to count
    return (1 << count);
}
 
// Driver code
int main()
{
   int x;
   cin >> x;
   cout << CountXORandSumEqual(x);
   return 0;
}