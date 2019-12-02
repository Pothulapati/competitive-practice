#include<bits/stdc++.h>
using namespace std;


bool check(int a[][2])
{
        int i,j;
        int minx = a[0][0];
        int miny = a[0][1];
        for(i=1;i<5;i++)
        {
            if(minx > a[i][0])
                minx = a[i][0];
            if(miny > a[i][1])
                miny = a[i][1];
        }
        int x[3][3];
        memset(x,0,sizeof(x));
        for(i=0;i<5;i++)
        {
                int p = a[i][0] - minx;
                int q = a[i][1] - miny;
                if(p>=0&&q>=0&&p<=2&& q<=2)
                {
                    x[p][q] = 1;
                }
                else
                {
                   return false;
                }
        }
        //check for T's


        if(x[1][0] + x[1][1] + x[1][2] == 3 && x[2][2] + x[1][2] + x[0][2] == 3)
            return true;
        else if(x[2][1] + x[1][1] + x[0][1] == 3 && x[0][0] + x[0][1] + x[0][2] == 3)
            return true;
        else if(x[2][0] + x[1][0] + x[0][0] == 3 && x[1][0] + x[1][1] + x[1][2] == 3)
            return true;
        else if(x[2][1] + x[1][1] + x[0][1] == 3 && x[2][0] + x[2][1] + x[2][2] == 3)
            return true;
        else
            return false;



}


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j;
        int a[5][2];
        int minx,miny;
        for(i=0;i<5;i++)
        {
            for(j=0;j<2;j++)
            {
                cin >> a[i][j];
            }
        }
       
        if(check(a))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;


    }
    return 0;
}