#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		int i,count=0,temp=0;
		for(i=0;i<n;i++)
		{
			if(s[i] == 'a')
			{
				count++;
			}
			else
			{
				temp++;
			}
		}
		if(count<temp || count == temp)
		{
			cout<<count<<endl;
		}
		else if(count>temp)
		{
			cout<<temp<<endl;
		}
	}
}