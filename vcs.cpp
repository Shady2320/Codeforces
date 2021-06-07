#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        int a[m],b[x];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<x;j++)
        {
            cin>>b[j];
        }
        cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(a[i]==b[j])
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<" ";
        cout<<n-(m+x-cnt)<<"\n";
    }
}