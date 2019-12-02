#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
      long long  int n;
      cin >> n;
      int i =0;
      int a[64];
      memset(a,0,sizeof(a));
      while(n != 0)
      {
          if(n&1)
            a[i] = 1;
        else
            a[i] = 0;
        n = n >>1;
        i++;
      }int temp;
      for(i=0;i<64;i+=2)
      {
          temp = a[i];
          a[i] = a[i+1];
          a[i+1] = temp;
      }

      int number = 0;
      for(i=0;i<64;i++)
      {
          number += a[i]*pow(2,i);
      }
        cout << number << endl;
    }
    return 0;
}