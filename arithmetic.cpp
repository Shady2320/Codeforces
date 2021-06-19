#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int n,i;
    	cin>>n;
    	int arr[n],sum=0,a;
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(i=0;i<n;i++)
    	{
    		sum = sum + arr[i];
    	}
    	if(sum >= 0)
    	{
    		a = sum - n;
    		cout<<a<<endl;
    	}
    	else
    	{
    		cout<<n<<endl;
    	}
    }
}