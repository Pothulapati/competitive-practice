#include<bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long int T;
    cin >> T;
    while(T--)
    {
        int n,flag,i,j;
        flag=0;
        cin >> n;
        string s;
        cin >> s;
        for(i=0,j=n-1;i<n&&j>=0;i++,j--)
        {
            if(s[i] != s[j])
            {
                flag =1;

                break;
            }
        }

        if(flag == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}