#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		sum+=x;
		sum1+=y;
		sum2+=z;
	}
	if(sum == 0 && sum1 == 0 && sum2 == 0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}