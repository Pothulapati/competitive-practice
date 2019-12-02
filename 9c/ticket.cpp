#include<bits/stdc++.h>
using namespace std;

/*int maxans(int a[],int n,int k,int ans)
{
    int i;
    if(k==0)
        return 0;

    for(i=0;i<n && a[i] >0;i++)
    {
        ans = ans + a[i];
        a[i] = a[i] - 1;
        ans = max(ans,maxans(a,n,k-1,ans));
        a[i] = a[i] + 1;
    }
    return ans;
} */



int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int i,j,n,k;
        cin >> n >> k;
        long long int a[n];
        priority_queue<int> pq;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        long long int ans = 0;
        long long int sum = 0;
        for(i=0;i<k;i++)
        {
            ans = pq.top();
            pq.pop();
            if(ans > 1)
                pq.push(ans - 1);
            sum += ans;
        }
        cout << sum << endl;
    }
    return 0;
}