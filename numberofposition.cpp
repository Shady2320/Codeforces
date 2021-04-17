#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,upr,lowr;
    cin>>n>>a>>b;
    upr = n - a;
    lowr = b + 1;
    cout<<min(upr, lowr)<<endl;
    return 0;
}