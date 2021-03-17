#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a,i,j;
	char temp;
	cin>>s;
	a = s.length();
	for(i=0;i<a-2;i=i+2)
	{
		for (j=i+2;j<a;j=j+2)
		{
		    if(s[i]>s[j])
		    {
			   temp=s[i];
			   s[i]=s[j];
			   s[j]=temp;
		    }	
		}
		
	}
	cout<<s;
}