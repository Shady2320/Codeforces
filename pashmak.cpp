#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	long long int max11 = *max_element(arr,arr+n);
	long long int min11 = *min_element(arr,arr+n);
	long long int cnt_max=0,cnt_min=0;
	for(j=0;j<n;j++)
	{
		if(arr[j] == max11)
		cnt_max++;
		if(arr[j] == min11)
		cnt_min++;
	}
	if(max11==min11)
	cout<<0<<" "<<n*(n-1)/2;
	else
	cout<<max11-min11<<" "<<cnt_max*cnt_min;
    return 0;
}