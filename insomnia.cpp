#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,n,d,i,a=0;
	cin>>k;
	cin>>l;
	cin>>m;
	cin>>n;
	cin>>d;
	a=d;
	if(k == 1 || l == 1 || m == 1 | n == 1)
	{
		cout<<d;
	}
	else
	{
		for(i=1;i<=d;i++)
		{
			if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
			{
				a--;
			}
		}
		cout<<a;
	}
}	