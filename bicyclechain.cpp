#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n;
	long long int max1 = INT_MIN;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	long long int arr1[m];
	for(int j=0;j<m;j++)
	{
		cin>>arr1[j];
	}
	map<long long int , long long int > mp;
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<m;l++)
		{
			if(arr1[l]%arr[k]==0)
			{
				mp[arr1[l]/arr[k]]++;
				max1 = max(max1,arr1[l]/arr[k]);
			}
		}
	}
	cout<<mp[max1];
    return 0;
}




