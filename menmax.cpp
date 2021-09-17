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
		string s3="";
		s3+=s[0];
		for(int i=1;i<s.length();i++)
		{
			if(s[i]!=s[i-1])
			s3+=s[i];
		}
		
		int cnt0 = count(s.begin(), s.end(),'0');
		int cnt1 = count(s.begin(), s.end(),'1');
		
		if(cnt0==0)
		cout<<0<<endl;
		else if(cnt1==0)
		cout<<1<<endl;
		else if(s3.length()==2)
		cout<<1<<endl;
		else if(s3=="101")
		cout<<1<<endl;
		else
		cout<<2<<endl;
		

	}
	
	return 0;
}