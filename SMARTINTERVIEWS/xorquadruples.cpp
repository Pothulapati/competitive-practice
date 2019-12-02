#include<bits/stdc++.h>
using namespace std;

int bs1(vector<int> a, int l,int h,int key)
{
    int mid;
    if(l<h)
    {
        mid = l + (h-l)/2;
        if(a[mid] == key)
            return bs1(a,l,mid,key);
        if(a[mid] < key)
            return bs1(a,mid+1,h,key);
        else
            return bs1(a,l,mid-1,key);
    }
        if(a[l] == key)
    return l;
    else 
        return 1;
}

int bs2(vector<int> a, int l, int h, int key)
{
    int mid;
    if(l<h)
    {
        mid = l + (h-l+1)/2;
        if(a[mid] == key)
            return bs2(a,mid,h,key);
        else if(a[mid] < key)
            return bs2(a,mid+1,h,key);
        else
            return bs2(a,l,mid-1,key);
    }
    if(a[l] == key)
    return l;
    else 
        return 0;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,n;
        cin >> n;
        int a[n],b[n],c[n],d[n];
        vector<int> c1,c2;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        for(i=0;i<n;i++)
            cin >> c[i];
        for(i=0;i<n;i++)
            cin >> d[i];
        map<int,int> h1,h2;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                c1.push_back(a[i]^b[j]);

                int p = c[i]^d[j];
                if(h2.find(p) == h2.end())
                    h2[p] = 1;
                else
                    h2[p]++;
                //h1[a[i]^b[j]]
                //c2.push_back(c[i]^d[j]);

            }
        }
        int count = 0;
        sort(c2.begin(),c2.end());
       // cout << c2.size() << endl;
       /* for(auto c1p = c1.begin();c1p!=c1.end();c1p++)
        {
            int p1 = bs1(c2,0,c2.size(),*c1p);
            int p2 = bs2(c2,0,c2.size(),*c1p);
            if(p2-p1 +1 > 0)
                count += p2-p1+1;
        }*/
        for(auto c1p = c1.begin();c1p!=c1.end();c1p++)
        {
            if(h2.find(*c1p) != h2.end())
            {
                count+= h2[*c1p];
            }
        }
        cout << count <<endl;
    }
    return 0;
}