#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool search(int a[],int n, int k)
{
        for(int i=0;i<n;i++)
        {
            int y = a[i];
            for(int j=0; j<n && i!=j;j++)
            {
                if(a[j] + y == k)
                {
                    return true;
                }
            }
        }
        return false;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    while(N--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        if(search(a,n,k))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
