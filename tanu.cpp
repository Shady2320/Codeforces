#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,count=0;
		cin>>n;
		string s;
		cin>>s;
		for(i=0;i<n;i++)
		{
			if(s[i] == 'Y')
			{
				cout<<"NOT INDIAN\n";
				break;
			}
			else if(s[i] == 'I')
			{
				cout<<"INDIAN\n";
				break;
			}
			else
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"NOT SURE\n";
		}
	}
}