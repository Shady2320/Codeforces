#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,l,k,first;
    cin >> n;
    for (i=-n;i<= n;i++)
    {
        first = n - abs(i);
        for(j=0;j<abs(i);j++)
        {
            cout<<"  ";
        }
        for(k=0;k<first;k++)
        {
            cout<< k << " ";
        }
        for(l=first;l>0;--l)
        {
            cout << l << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}

