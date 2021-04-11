#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	string s,s1;
	int i,j,a,ans;
	cin>>s>>s1;
	reverse(s.begin(),s.end());
	if(s == s1)
	{
	    cout<<"YES";
	}   
	else
	{
	    cout<<"NO";
	}    
}