#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,j,count=0;
		cin>>n>>k;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr[i] = arr[i] + k;
		}
		for(j=0;j<n;j++)
		{
			if(arr[j]%7 == 0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}



