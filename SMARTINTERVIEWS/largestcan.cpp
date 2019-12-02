#include<bits/stdc++.h>
using namespace std;


bool comparer(int a,int  b)
{
    int x,y,na,nb;
    x=a;
    y=b;
    na=0;nb=0;
    if(a == 0)
        na = 1;
    else
    {
        while(x!=0)
        {
            na++;
            x = x/10;
        }
    }
    if(b == 0)
    {
        nb =1;
    }
    else
    {
        while(y!=0)
        {
            nb++;
            y = y/10;
        }
    }
    int ab = pow(10,nb)*a + b;
    int ba = pow(10,na)*b + a;
    //cout << a << " " << b << endl;
    //cout << ab << " " << ba << endl;
    //cout << "====================================" << endl;
    return ab >= ba;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        //sort(a,a+n,greater<int>());
        stable_sort(a,a+n,comparer);
        for(i=0;i < n;i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}