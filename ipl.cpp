#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,g;
	cin>>a>>b>>c;
	g = 20 - b;
	d = g*36;
	e = a-c;
	if(e<d)
	{
		cout<<"YES\n";
	} 
	else
	{
		cout<<"NO\n";
	}
}