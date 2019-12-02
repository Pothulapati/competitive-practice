#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,i,j;
    cin >> T;
    int k=1;
    while(T--)
    {
        cin >> n;
        int l = n;
        cout << "Case #" << k  << ":";
        cout << endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j<l-1)
                    cout << " ";
                else
                    cout << "*";
            }
            l--;
            cout << "\n";
        }
        k++;
    }
    return 0;
}