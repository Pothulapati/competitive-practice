#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkNtoM(int n, int m, int k)
{
    
    for(int p=0;;p++)
    {
        for(int q =0;;q++)
        {

        }
    }


}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--)
    {
        int n,m;
        cin >> n >> m;
        if(n==m)
        {
            cout << ans << endl;
            continue;
        }
        int ans = checkNtoM(n,m, 0);
        if(ans == -1)
            cout << "Not Possible";
        else 
            cout << ans;
        cout << endl;
    }
    return 0;
}
