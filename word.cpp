#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a,count=0,lower=0,i,j,k;
	a = s.length();
	for(i=0;i<a;i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			count++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			lower++;
		}             
	}
	if(count > lower)
	{
		for(j=0;j<a;j++)
		{
			s[j] = toupper(s[j]);
		}
	}
	else if(count < lower)
	{
		for(k=0;k<a;k++)
		{
			s[k] = tolower(s[k]);
		}
	}
	else if(count == lower)
	{
		for(k=0;k<a;k++)
		{
			s[k] = tolower(s[k]);
		}
	}
	cout<<s;
}