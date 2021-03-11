#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long int count=0, mid;
        if(n%2==0)
        {
            mid=(n/2)-1;
        }
        else
		{
            mid=(n/2);
        }
        long long int d=n-k;
 
        if(k==0)
        {
            cout<<"YES"<<endl;
        }
        else
		{
	        for(int i=0;i<mid;i++)
	        {
	            if(s[i]==s[n-1-i])
	            {
	                count++;
	            }
	            else
	            {
	                break;
	            }
	        }
	        if(n%2==0)
	        {
		        if( count>=k && k<n/2)
		        {
		            cout<<"YES"<<endl;
		        }
		        else
		        {
		            cout<<"NO"<<endl;
		        }
	        }
	        else
			{
	            if( count>=k)
		        {
		            cout<<"YES"<<endl;
		        }
		        else
		        {
		            cout<<"NO"<<endl;
		        }
	        }
        }
    }
    return 0;
}