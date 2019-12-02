#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
        int i,k;
        int p = -1;
        int d = 0; 
        i = 0;
        while(s[i] == '.')
        i++;
        p = (int)s[i] - 48;
        for(i = i+1;i<s.size();i++)
        {
            if(s[i] == '.')
            {
                d++;
            }
            else
            {
                int x = (int)s[i] - 48;
                //cout << x << " " << d << endl;
                if(x>d || x > (d - p))
                    return false;
                d = 0;
            }
        }
        return true;
        /*
               int x = (int)s[i] - 48;
   
                //cout << x << endl;
                //int k = i +1;
                //Check if it finishes by p i.e x can decrease but should stop before p;
                int k = i-1;
                while(x > 0)
                {
                    if(k < 0)
                        break;
                    if(s[k] == '.' && k >p)
                    {
                        k--;
                        x--;
                    }
                    else
                        return false;
                }
                k = i+1;
                x = (int)s[i] - 48;
                while(x >0)
                {

                    //cout << "Second " << p << endl;
                    if(s[k] == '.')
                    {
                        k++;
                        x--;
                    }
                    else
                        return false;
                    p = k;
                }
            }

        }
        return true;
        */

}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int i,j,k,n;
        string s;
        cin >> s;
        if(check(s))
            cout << "safe" << endl;
        else
            cout << "unsafe" << endl;
        
    }
    return 0;
}