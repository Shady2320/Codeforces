#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,c,i,j,arr[100],arr1[100];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(j=0;j<m;j++)
	{
		cin>>arr1[j];
	}
	sort(arr1, arr1+m);
	a = arr[0];
	b = arr[n-1];
	c = max(2*a, b);
	if(c < arr1[0])
	{
		cout<<c;
	}
	else
	{
		cout<<"-1\n";
	}
}


