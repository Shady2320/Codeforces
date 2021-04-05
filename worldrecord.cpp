#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float k1,k2,k3,v,a,time,b,d;
		cin>>k1>>k2>>k3>>v;
		b = 9.58;
		a = k1*k2*k3*v;
		time = 100/a;
		float c = int(time*100 + .5);
        d = (float) c/100;
		if(d<b)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}