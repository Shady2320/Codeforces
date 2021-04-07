#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,flag=0;
		cin>>n>>k;
		string s;
		cin>>s;
		n = s.length();
	    for(i=0;i<n;i++)
	    {
	    	if(s[i] == '*' )
	    	{
	    		flag++;			        
	    	}
	    	else
	    	{
	    		flag=0;
	    	}
	    	if(flag >= k)
		    {
			    cout<<"YES\n";
			    break;
		    }
	    }	
		if(i==n)
	    { 
	        cout<<"NO\n";
	    }	
	}
}