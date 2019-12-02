#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y,i;
    cin >> n;
    unordered_map<int,int> x;
    for(i=0;i<n;i++)
    {
        cin >> y;
        x[y]++;
    }
    int t;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> y;
        cout << x[y] << endl;
    }
    return 0;
}