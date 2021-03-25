#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,count=0,arr[100];
	cin>>n;
	while(n--)
	{
		int sum=0;
		for(i=0;i<3;i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		if(sum >= 2)
		{
			count++;
		}
	}
	cout<<count;
}	