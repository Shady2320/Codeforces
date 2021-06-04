#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f,sum;
		cin>>a>>b>>c>>d;
        e = c/a;
        f = d/b;
        sum = e+f;
        cout<<sum<<endl;
	}
}