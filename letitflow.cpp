#include <bits/stdc++.h>
using namespace std;

int Count(char a[][1000],int N)
{
    const unsigned int M = 1000000007;
    int i,j,total,t =0;
    int ans = 1;
    int c = 0;
    if(a[0][0] == '#' || a[1][0] == '#' || a[2][N-1] == '#' || a[1][N-1] == '#' || (N-2)%2!=0)
        return 0;

    for(j=1;j<N-1;j++)
    {
        if(a[1][j] == '#')
            return 0;

        for(i=0;i<3;i+=2)
        {
            //cout << "is" << endl;
            //cout << "A[" << i << "][" << j << "]:" << a[i][j] << endl;
            if(a[i][j] == '#')
            {
                //cout << "is=nside" << endl;
                c++;
                if(j%2!=0)
                    j++;
                break;
            }
        }    

    }
    //cout << "N Value:" << (N-2)/2 << endl;
    //cout << "C value:" << c << endl;
    long long x =  pow(2,(N-2)/2-c);
    return x%M;
}

int main()
{
    const unsigned int M = 1000000007;

    int T,k=1;
    cin >> T;
    while(T--)
    {
        int i,j,N;
        cin >> N;
        char a[3][1000];
        for(i=0;i<3;i++)
        {
            for(j=0;j<N;j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Case #" << k << ": " << Count(a,N) << endl;
        k++;
    }
    return 0;
}