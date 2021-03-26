#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,a,sum=0,count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(j=0;j<n;j++)
	{
		sum = sum + arr[j];
	}
	for(k=1;k<=5;k++)
	{
		a=sum+k;
		if(a%(n+1) != 1)
		{
			count++;
		}
	}
	cout<<count;
}
