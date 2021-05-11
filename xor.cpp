#include<bits/stdc++.h>
using namespace std;
#define modulo 100000000007
int power(long long x,long long int y, long long int p)
{
	long long int count=1;
	x=x%p;
	if(x==0)
	{
		return 0;
	}
	while(y>0)
	{
		if(y&1)
		{
			count = (count*x)%p;
		}
		y=y>>1;
		x=(x*x)%p;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,result;
		cin>>n;
		result = power(2,n-1,modulo);
		cout<<result<<endl;
	}
}

