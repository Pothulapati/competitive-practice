#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int h)
{
    int mid = l + (h-l)/2;
    int c[h-l+1];
    int i = l;
    int j = mid+1;
    int k=0;
    while(i<=mid||j<=h)
    {
        if(a[i] > a[j])
        {
            c[k] = a[j];
            j++;
            k++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }

    while(i<=mid)
    {
            c[k] = a[i];
            i++;
            k++;
    }
    while(j<=h)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    int p = 0;
    while(p < k)
    {
        a[l] = c[p];
        l++;
    }

}

void mergesort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid = l + (h - l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,h);

    }
}

int main()
{
    int i,n;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
        cout << a[i] <<  " ";
    return 0;
}


