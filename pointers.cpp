#include <bits/stdc++.h>
using namespace std;

int foo[] = {1,2,3,4,5};

int main()
{
    //Second Program
    int i;
    int a[] = {1,2,3,4,5};
    int *q = a;
    ++*q;
    *q++;
    *q++;
    ++*q;
    for(i=0;i<5;i++)
    {
        cout << a[i];
    }
    return 0;
}