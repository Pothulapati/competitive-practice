#include<bits/stdc++.h>
using namespace std;


void merge(long long int a[],int l,int mid,int h)
{
    int c[h-l+1];
    int i,j,k,p;
    i = l;
    j = mid+1;
    k = 0;
    while(i<=mid&& j <=h)
    {
        if(a[i] > a[j])
        {
            c[k] = a[j];
            k++;
            j++;

        }
        else
        {
            c[k] = a[i];
            k++;
            i++;
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
        k++;
        j++;
    }
    p = 0;
    while(l<=h)
    {
        a[l] = c[p];
        l++;
        p++;
    }
}

void mergesort(long long int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid = l + (h-l)/2;
        //cout << mid << endl;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

bool bs(long long int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid = l + (h-l)/2;
        if(a[mid] == key)
            return true;
        else if(a[mid] < key)
            return bs(a,mid+1,h,key);
        else
            return bs(a,l,mid-1,key);
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,k;
        int n,a,b;
        int sum = 0;
        cin >> n;
        long long int x[n];
        int flag = 0;
        for(i=0;i<n;i++)
        {
            cin >> x[i];
            sum += x[i];
        }
        int search;
        mergesort(x,0,n-1);
        int p,q;
        p = 0;
        q = n-1;
        int s;
        while(p<=q)
        {
            s = sum - x[p]- x[q];
            if(x[p] + x[q] > s)
                q--;
            else if(x[p] + x[q] < sum)
                p++;
            else
            {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "No" << endl;

    }
    return 0;
}