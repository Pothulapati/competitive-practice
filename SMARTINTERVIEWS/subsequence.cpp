#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string a,b;
        cin >> a;
        cin >> b;
        auto ia = a.begin();
        auto ib = b.begin();
        for(;ia != a.end() && ib != b.end();ib++)
        {
            if(*ia == *ib)
                ia++;
        }
        if(ia == a.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}