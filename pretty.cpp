#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
        for(int i=1;i<n-2;i+=2)
            cout<<i+1<<" "<<i<<" ";
        if(n%2==0)
            cout<<n<<" "<<n-1<<endl;
        else
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;
	}
}