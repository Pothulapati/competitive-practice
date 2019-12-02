#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,n;
        string x;
        cin >> n;
        cin >> x;
        int flag = 0;
        //cout << "-------------" << endl;
        for(i=0;i<n/2;i++)
        {
            if(x[i] != x[n-1-i])
            {
                //cout << i << " " << n-1 -i << endl; 
                //cout << x[i] << " "<<x[n-i] << " " << abs(x[i] - x[n-i]) << endl;
                if(abs(x[i] - x[n-1-i]) != 2)
                {
                    flag = 1;
                }
            }
        }
        
        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}