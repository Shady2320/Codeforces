#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		long long int n,a,b,count=0,i,j;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				a = n*2;
				if(i*(2*j + i -1) == a)
				{
					count++;
				}

			}
		}
		cout<<"Case #" <<k<<":"<<" "<<count<<endl;
	}
}