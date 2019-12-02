#include<bits/stdc++.h>
using namespace std;

int getnth2set(long long int n)
{
        long long int j;
        long long int i;
        unsigned int M = 1000000007;
        i = 1;
        while (n > 0)
         {
             j=0;
            while(j < i)
            {
                int number =( 1 << j) + (1 << i);
                n--;
                if(n == 0)
                    return number;
                j++;

            }     
            i++;
        }
        return 0;
}


int main()
{
    int T;

    cin >> T;
    while(T--)
    {
        long long int n;
        cin >> n;
        cout << getnth2set(n) << endl;
    }
    return 0;
}