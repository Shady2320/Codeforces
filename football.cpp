#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string,long long int > mp;
	int max1 = INT_MIN;
	string s1;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		mp[s]++;
		if(mp[s]>max1)
		{
			max1 = mp[s];
			s1 = s;
		}
	}
	cout<<s1;
	
}