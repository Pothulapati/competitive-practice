#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int l,int mid,int h)
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

void mergesort(int a[],int l,int h)
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
    int T;
    cin >> T;
    while(T--)
    {
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        mergesort(a,0,n-1);
        int maxc,count;
        count = 0;
        maxc = 1;
        //cout << endl;
        for(i=0;i<n-1;i++)
        {
            if(a[i] - a[i+1] == -1)
            {
                count++;
            }
            else
            {
                if(count > maxc)
                {
                    maxc = count;
                }
                count=0;
            }
            //cout << count << " ";
            //cout << maxc << " ";
        }
        if(count > maxc)
        {
            maxc = count;
        }
        cout << maxc+1 << endl;
    }
    return 0;
}