#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i;
    cin>>a>>b>>n;
    bool ans(false);
    for(i=0;i<10;++i)
    {
        if((a*10 + i) % b == 0)
        {
            cout<< a*10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            ans = true;
            break;
        }
    }
    if(!ans)
    {
        cout << -1 << endl;
    }
    return 0;
}


