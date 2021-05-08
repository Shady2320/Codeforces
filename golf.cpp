#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k,a;
		cin>>n>>x>>k;
		a = (n+1)%k;
		if(x%k == 0 || x%k == a)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}