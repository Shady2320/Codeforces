#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,l,sum=0;
	cin>>n>>m;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(l=0;l<m;l++)
	{
		if(arr[l] <= 0)
		{
			sum = sum + arr[l];
		}
	}
	sum = abs(sum);
	cout<<sum;
}