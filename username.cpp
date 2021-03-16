#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,min1,max1,count=0,arr[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max1=arr[0];
	min1=arr[0];
	for(j=0;j<n;j++)
	{
		if(arr[j]>max1)
		{
			max1=arr[j];
			count++;
		}
		else if(arr[j]<min1)
		{
			min1=arr[j];
			count++;
		}
	}
	cout<<count;
}