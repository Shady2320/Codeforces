#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	vector<pair<long long int , long long int > > v;
	long long int max1 = INT_MIN;
	for(int i=0;i<n;i++)
	{
		int pre = 0,post = 0;
		if(i==0)
		{
			//pre = 0;
			for(int j=1;j<n;j++)
			{
				if(a[j]<=a[j-1])
				post++;
				else
				break;
			}
			v.push_back({pre,post});
		}
		else if(i==n-1)
		{
			//post = 0;
			for(int j=n-2;j>=0;j--)
			{
				if(a[j]<=a[j+1])
				pre++;
				else
				break;
			}
			v.push_back({pre,post});
		}
		else
		{
			for(int j=i-1;j>=0;j--) 
			{
				if(a[j]<=a[j+1])
				pre++;
				else
				break;
			}
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<=a[j-1])
				post++;
				else
				break;
			}
			v.push_back({pre,post});
		}
		max1 = max(max1,v[i].first+v[i].second + 1);
	}
	cout<<max1;
    return 0;
}