#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i;
	cin>>n;
	int arr[n],a = INT_MAX,b,index;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<a)
		{
			a = arr[i];
			index = i;
		}
	}
	b = count(arr,arr+n,a);
	if(b>1)
	{
		cout<<"Still Rozdil\n";
	}	
	else
	{
	    cout<<index+1;
	}    	
}