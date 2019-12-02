#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
     int p=1;
    long long N,O,D,X1,X2,A,B,C,M,L;
    cin >> T;
    while(T--)
    {
        int i,j,k,max;
        cin >> N >> O >> D;
        cin >> X1 >> X2 >> A >> B >> C >> M >> L;
        int X[N];
        int S[N];
        X[0] = X1;X[1] = X2;
        for(i=2;i<N;i++)
            X[i] = (A*X[i-1] + B*X[i-2] + C)%M;
        for(i=0;i<N;i++)
            S[i] = X[i] + L;
        /*cout << "S: ";
        for(i=0;i<N;i++)
        {
            cout << S[i] << " ";
        }
        cout << endl;
        */
        int result = 0;
        max = INT_MIN;
        for (int i=0; i <N; i++)
        {
            for (int j=i; j<N; j++)
            {
                result = 0;
                int odd = 0;
                for (int k=i; k<=j; k++)
                {
                    if(S[k]%2 != 0)
                        odd++;
                    if(odd <=O)
                    {
                        result += S[k];
                    }
                    else
                        break;
                }
                if(odd <=O && result <= D)
                {
                    //cout << result << endl;
                    if(result > max)
                        max = result;
                    
                }
                
            }
        }

        cout << "Case #" << p << ": ";
        if(max == INT_MIN)
            cout << "IMPOSSIBLE";
        else
            cout << max;
        cout << endl;  
        p++;
    }
    return 0;
}