#include <bits/stdc++.h>
using namespace std;
int coun = 0;

void find(int i,int j,int m,int n)
{
    if(i<m && j <n)
    {
        if(i==m-1 && j== n-1)
        {
            coun++;
        }
        else
        {
            find(i,j+1,m,n);
            find(i+1,j,m,n);
        }
    }
}

int main()
{
    int m,n;
    cin >> m >> n;
    int a[m][n];
    memset(a,sizeof(m*n*sizeof(int)),0);
    find(0,0,m,n);
    cout << coun;
}