#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	float arr[100],ans,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(j=0;j<n;j++)
	{
		arr[j] = arr[j]/100;
	}
	for(k=0;k<n;k++)
	{
		sum = sum + arr[k];
	}
	ans = sum/n;
	ans = ans*100;
	cout<<ans;
}