#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int x,y,z,a,b,c,count;
	cin>>x>>y>>z;
	a = sqrt((x*y)/z);
	b = sqrt((x*z)/y);
	c = sqrt((y*z)/x);
	count = (a+b+c)*4;
	cout<<count;
	return 0;
}