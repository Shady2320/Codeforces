#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,d,n;
		cin>>a>>b>>c>>d;
		n = a/b;
		long long int sum=0;
		if(n%2 == 0)
		{
			sum = b*((n/2)*(2*c + (n-1)*b)); 
		}
		else
		{
			sum = b*(n*(c + ((n-1)/2)*b));
		}

		sum = sum + (a%b)*(c + n*d);
		cout<<sum<<endl; 
	}
}
