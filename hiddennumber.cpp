#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,b;
	cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n%2 == 0)
    	{
    		b = n/2;
            a = 2;
            cout<<a<<' '<<b<<endl;
    	}
    	else
    	{
    		a = 1;
    		b = n/a;
    		cout<<a<<' '<<b<<endl;
    	}
    }
}