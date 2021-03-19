#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int a,b,i;
	string s;
	cin>>s;
	a = s.length();
	set<char> st;
	for(i=0;i<a;i++)
	{
		st.insert(s[i]);
	}
	b = st.size();
	if(b%2 == 0)
	{
		cout<<"CHAT WITH HER!\n";
	}
	else
	{
		cout<<"IGNORE HIM!\n";
	}
}