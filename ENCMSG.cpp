#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i;
        string str;
        char temp;
        cin >> n;
        cin >> str;
        char x = str[n-1];
        for(i=0;i<n;i+=2)
        {
                temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
        }
        if(n%2!=0)
            str[n-1] = x;
        for(i=0;i<n;i++)
        {
            
            str[i] = str[i] + 25 + 2*(97 - str[i]);
        }
        cout << str << endl;
    }
    return 0;
}