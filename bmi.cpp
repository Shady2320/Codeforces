#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int m,h,a,b;
		cin>>m>>h;
		a = h*h;
		b = m/a;
		if(b <= 18)
		{
			cout<<"1\n";
		}
		else if(b >= 19 && b <= 24)
		{
			cout<<"2\n";
		}
		else if(b >= 25 && b <= 29)
		{
			cout<<"3\n";
		}
		else if(b >= 30)
		{
			cout<<"4\n";
		}
	}
}