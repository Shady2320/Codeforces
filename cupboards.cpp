#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a,b,ans,count=0,count1=0,arr[10000],arr1[10000],count2=0,count3=0,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i]>>arr1[i];
	}
	for(j=0;j<n;j++)
	{
		if(arr[j]==1)
		{
			count++;
		}
		else
		{
			count1++;
		}
	}
	a = min(count,count1);
	for(k=0;k<n;k++)
	{
		if(arr1[k]==1)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	b = min(count2,count3);
	ans = a + b;
	cout<<ans;
}