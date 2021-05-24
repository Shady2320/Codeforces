#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,res=0;
        cin>>n>>b;
        while(n--)
        {
            int w,h,p;
            cin>>w>>h>>p;
            if(p<=b)
            {
                if(res<w*h)
                {
                res=w*h;
                }    
            }
        }
        if(res==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<res<<endl;
        }        
    }
	return 0;
}