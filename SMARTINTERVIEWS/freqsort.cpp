#include<bits/stdc++.h>
using namespace std;

struct element
{
    int value;
    int count;
};


bool comparer(struct element a,struct element b)
{
    if(a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {
        return a.count < b.count;
    }
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
        struct element m[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        j=0;
        m[0].value = a[0];
        m[0].count = 1;
        for(i=1;i<n;i++)
        {
            if(a[i] == m[j].value)
                m[j].count++;
            else
            {
                j++;
                m[j].value = a[i];
                m[j].count = 1; 
            }
        }
        stable_sort(m,m+j+1,comparer);
        for(i=0;i<=j;i++)
        {
            for(int k=0;k<m[i].count;k++)
                cout << m[i].value << " ";
            //cout << m[i].value << " " << m[i].count << endl;
        }
        cout << endl;
    }
    return 0;
}