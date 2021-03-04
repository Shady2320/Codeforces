#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,arr[101],i,j = 0;
    cin>>n>>m;
    queue< pair< long long int , long long int > > q;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        q.push({arr[i],i});
    }
    while(q.size()>1)
	{
		if(q.front().first<=m) 
		{
			q.pop();
		}
		else 
		{
			q.push({q.front().first-m,q.front().second});
			q.pop();
		}
	}
	cout<<q.front().second;
	return 0;
}