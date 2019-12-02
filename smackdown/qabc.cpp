#include<bits/stdc++.h>
using namespace std;

void magicopminus(int a[],int i)
{
    a[i] = a[i] - 1;
    a[i+1] = a[i+1] - 2;
    a[i+2] = a[i+2] - 3; 
}

bool check(int b[],int n)
{
    int i,j;
    for(i=0;i<(n-2);i++)
    {
        while(b[i] > 0)
        {
            magicopminus(b,i);
        }
        if(b[i+1] <0 || b[i+2] < 0)
            return false;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!= 0)
            return false;
    }
    return true;

}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,x,n;
        cin >> n;
        int a[n];
        int b[n];
        long long int sum;
        sum = 0;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
        {    
            cin >> x;
            b[i] = x - a[i];
            sum += b[i];
        }
        bool stat = check(b,n);
        if(!stat)
            cout << "NIE" << endl;
        else
            cout << "TAK" << endl;
    }
    return 0;
}