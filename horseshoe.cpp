#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s1,s2,s3,s4,ans;
	cin>>s1>>s2>>s3>>s4;
	set<int> st;
	st.insert(s1);
	st.insert(s2);
	st.insert(s3);
	st.insert(s4);
	ans = 4 - st.size();
	cout<<ans;
}