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


int main()
{
        int n,i,k,j;
        unordered_map<int,int> m;
        cin >> n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        mergesort(a,0,n-1);
        int p,q;
        cin >> q;
        long long int queries[q];
        long long int quer[q];
        for(i=0;i<q;i++)
        {
            cin >> queries[i];
            quer[i] = queries[i];
        }
        mergesort(queries,0,q-1);
        for(i=0;i<q;i++)
        {
            for(j=i;j<n;j++)
            {
                if(queries[i] == a[j])
                {
                    //cout << a[j] << endl;
                    m[queries[i]] = a[j];
                    break;
                }
                else if(queries[i] < a[j])
                {
                    // /cout << a[j] << endl;
                    m[queries[i]] = a[j];
                    break;
                }
            }
            if(j==n)
                m[queries[i]] = INT_MAX;
        }
        for(i=0;i<q;i++)
        {
            cout << m[quer[i]] << endl;
        }
        
    return 0;
}