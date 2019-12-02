#include <bits/stdc++.h>

using namespace std;

int countbits(long n)
{
    int count =0;
    while(n!=0)
    {
        if(n&1)
            count++;
        n>>1;
    }
    return count;
}

long setbits(long n)
{
    long k= n;
    int pos = 0,pos1 = 0;
    while(k!=0)
    {
        if(k&1)
        {
            pos1 = pos;
        }
        k>>1;
        pos++;
    }
    return n-(1<<pos);
    
}

// Complete the counterGame function below.
string counterGame(long n) {
    int count =0;
    cout << "INSIDE COUNTER";
    while(n!=0)
    {
        if(countbits(n) == 1)
        {
            n = n>>1;
            cout << "Now positive" << endl;
            
        }
        else
        {
            cout << "NOW NEGATIVE\n";
            n = setbits(n);
        }
        count++;

    }
    if(count%2==0)
        return "Lousie";
    else
        return "Richard";

}

int main()
{

    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << counterGame(n) << endl;
    }

    return 0;
}
