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
    int n,y,i,t;
    cin >> n;
    vector<int> x;
    for(i=0;i<n;i++)
    {
        cin >> y;
        x.push_back(y);
    }
    sort(x.begin(),x.end());
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q;
        int p1 = bs1(x,0,n-1,q);
        //cout << "p1 " << p1 << endl;
        int p2 = bs2(x,0,n-1,q);
        //cout <<  p1 << " " << p2 << endl;
        cout <<   p2 - p1 +1 << endl;
    }


    return 0;
}