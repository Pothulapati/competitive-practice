#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        if(N%2==0)
        {
            if((N/2)%2 == 0)
            {
                cout << 0 << endl;
            }
            else
                cout << 1 << endl;
        }
        else
        {
            if((N-1)/2)%2 == 0)
            {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
