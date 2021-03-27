#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;
		long long int countri = INT_MIN;
        for(int i=0;i<n;i++)
        {
        	long long int si,ri;
            cin>>si>>ri;
	        if(si<=x)
	        {
	            countri = max(countri, ri);
	        }
        }
        cout<<countri<<endl;
	}
}