#include<bits/stdc++.h>
using namespace std;

int main()
{
   unsigned int t,count,i;
    count = 0;
    cin >> t;
    i =0;
    while(i<32)
    {
        if(t& (1 << i))
            count++;
        i++;
    }
    cout << count << endl;
    return 0;
}