#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int a1,a2,total,area;
        long long int r1blx,r1bly,r1trx,r1try,r2blx,r2bly,r2trx,r2try;
        cin >> r1blx >> r1bly >> r1trx >> r1try;
        cin >> r2blx >> r2bly >> r2trx >> r2try;
        long long int width =  min(r1trx,r2trx) - max(r1blx,r2blx);
        long long int height = min(r1try,r2try) - max(r1bly,r2bly);
        //cout << width << " " << height << endl;
        //cout << "Area :" << width*height << endl;
        area = width*height;
        a1 = (r1trx - r1blx) * (r1try - r1bly);
        a2 = (r2trx - r2blx) * (r2try - r2bly);
        //cout << a1 << endl;
        //cout << a2 << endl;
        //cout <<height << " " << width <<  area << endl;
        total = a1+a2;
        if(area > 0 && (height > 0 && width > 0))
        {
            total = total - area;
        }
        cout << total << endl;
    }
    return 0;
}