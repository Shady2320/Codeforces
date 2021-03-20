#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,k,l,c,d,p,nl,np,a,b,f;
	cin>>n >>k >>l >>c >>d >>p >>nl >>np;
	temp = k*l;
	a = temp/nl;
    b = c*d;
    f = p/np;
    if(a<b && a<f)
    {
    	a = a/n; 
    	cout<<a;
    }
    else if(b<a && b<f)
    {
    	b = b/n;
    	cout<<b;
    }
    else
    {
    	f = f/n;
    	cout<<f;
    }
}    