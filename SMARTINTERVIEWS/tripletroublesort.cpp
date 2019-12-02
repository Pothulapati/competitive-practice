#include<bits/stdc++.h>
using namespace std;void merge(int a[],int l,int mid,int h)
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
    int T,k;
    cin >> T;
    while(T--)
    {
        int flag = 0;
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        mergesort(a,0,n-1);
        //for(i=0;i<n;i++)
          //  cout << a[i] << " ";

        int count = 1;
        k = a[0];
        for(i=1;i<n;i++)
        {
            //cout << a[i] << k << endl;
            if(a[i] == k)
            {
                count++;
            }
            else 
            {
                //cout << "inside" << count << endl;
                if(count == 1)
                {
                    cout << k << endl;
                    flag = 1;
                    break;
                }
                count = 1;
                k = a[i];
            }


        }
        if(flag == 0&&count == 1)
            cout << a[i-1] << endl;
        

    }
    return 0;
}