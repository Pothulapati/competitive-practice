#include <bits/stdc++.h>
using namespace std;

int maxStreak(int m, string data[])
{
    int i=0;
    maxcount = 0;
    for(i=0;i<data.length;i++)
    {
        count = 0;
        for(j=0;j<data[i].length;j++)
        {
            if(data[i][j] == "Y")
                count++;
        }

        if(count > maxcount)
            maxcount = count;
    }
    return maxcount;
}

int main()
{
    int n,m;
    int i=0;
    cin >> m;
    cin >> n;
    string data[n];
    for(i =0;i<n;i++)
    {
        cin >> data[i];
    }

}