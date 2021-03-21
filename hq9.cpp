#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a,i,count=0;
	a = s.length();
	for(i=0;i<a;i++)
	{
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			count=1;
		}
	}
	if(count)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}