#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,i;
	char temp;
	cin>> n >> a;
	string s;
    cin>>s;
    while(a--)
    {
    	for(i=0;i<n;i++)
    	{
    		if(s[i] == 'B' && s[i+1] == 'G')
    		{
    			temp = s[i];
    			s[i] = s[i+1];
    			s[i+1] = temp;
    			i++;
    		}
    	}
    }
    cout<<s;
}    

    
