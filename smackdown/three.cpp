#include<bits/stdc++.h>
using namespace std;

int checkSemiprime(int num) 
{ 
    int cnt = 0; 
    for (int i = 2; cnt < 2 && i * i <= num; ++i) 
    {
        while (num % i == 0) 
            num /= i,++cnt; 
    }
  
    if (num > 1) 
        ++cnt; 

    return cnt == 2; 
} 

int main()
{
    int i,T;
    cin >> T;
    vector<int> q;
    for(i=4;i<=100000;i++)
    {
        if(checkSemiprime(i))
        {
            cout << i << endl;
            q.push_back(i);
            if(q.size() >= 400)
                break;
        }
    }
    while(T--)
    {
        int n;
        cin >> n;
        int i = 0;
        int flag =0;
        int j = q.size() - 1;
        while(i<=j)
        {
            if(q[i] + q[j] < n)
                i++;
            else if(q[i] + q[j] > n)
                j--;
            else
            {
                flag =1;
                cout << q[i]<< " " << q[j] << " " << n << endl ;
                break;
            }
        }
        if(flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}