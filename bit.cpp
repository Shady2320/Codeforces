#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	while(n--)
	{
		int i,a;
		string s;
		cin>>s;
		a=s.length();
		for(i=0;i<a;i++)
		{
			if(s[i] == '+' && s[i+1] == '+')
			{
				count++;
			}
			else if(s[i] == '-' && s[i+1] == '-')
			{
				count--;
			}
		}
	}
	cout<<count;
}