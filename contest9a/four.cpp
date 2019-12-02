#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i,count;
        count = 0;
        cin >> n;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {                
                if(n/i == i)
                    count++;
                else
                    count+=2;
            }
        }
        cout << count << endl;

    }
    return 0;
}