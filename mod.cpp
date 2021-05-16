#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,count=0,i,j,a;
		cin>>n>>m;
		vector<long long> mod(n+1,1);
		for(i=2;i<=n;i++)
		{
			a=m%i;
			count = count + mod[a];
			for(j=a;j<=n;j=j+i)
			{
				mod[j]++;
			}
		}
		cout<<count<<endl;
	}
}