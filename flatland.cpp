#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n;
	    while(n!=0)
 	    {
		    a = floor(sqrt(n));
		    n = n - a*a;
		    count++;
	    }
	    cout<<count<<endl;
	}
	
}	