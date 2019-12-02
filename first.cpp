#include <bits/stdc++.h>
using namespace std;

string find(int x1,int y1,int x2,int y2)
{
    if (x1 > x2 || y1 > y2)
        return "No";
    else if (x1==x2 && y1==y2)
        return "Yes";
    
    if(find(x1+y1,y1,x2,y2) == "Yes" || find(x1,x1+y1,x2,y2) == "Yes")
        return "Yes";
    else
        return "No";
        //cout << "second rec";
}


int main()
{
    int x1,y1,x2,y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    cout << find(x1,y1,x2,y2) << endl;
}
