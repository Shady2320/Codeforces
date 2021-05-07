#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,a,b,ans,d;
		cin>>x>>a>>b;
		ans = a + (100-x)*b;
		d = ans*10;
		cout<<d<<endl;
	}
}