#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a,count=0;
	cin>>n;
	string s;
	cin>>s;
	a = s.length();
	for(i=0;i<a;i++)
	{
		if(s[i] == s[i+1])
		{
			count++;
		}
	}
	cout<<count;
}