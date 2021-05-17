#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int addNumbers(float x, float y)
{
	float res;
	res = x+y;
	return res;
}
int main()
{
	float ans;
	int ans1;
	float a,b;
	cin>>a>>b;
	ans = addNumbers(a,b);
	ans1 = floor(ans);
	cout<<ans1;
}