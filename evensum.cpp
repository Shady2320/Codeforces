#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k,sum=0,count=0,arr[n];
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int a;
		for(j=0;j<n;j++)
		{
			sum = sum + arr[j];
		}
		if(sum%2 == 0)
		{
			cout<<"0\n";
		}
		else 
		{
			for(k=0;k<n;k++)
			{
				if(arr[k] == arr[k+1])
				{
					cout<<"-1\n";
				}
				else
				{
					a = *min_element(arr,arr+n);
					a = (floor(a)/2) -1;
					count++;
				}

			}
			cout<<count;
		}
	}
}