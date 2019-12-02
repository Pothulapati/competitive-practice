#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int i,j,k,a,n,b;
        cin >> n >> a >> b;
        long long int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        
        long long int sum = 0;
        long long int count = 0;
        for(i=0;i<n;i++)
        {
            sum = 0;
            for(j=i;j<n;j++)
            {
                sum += arr[j];
                if(sum >= a && sum <=b)
                    count++;
            }
        }
        cout << count << endl;

    }
    return 0;
}