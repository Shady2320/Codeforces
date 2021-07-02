#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T,i,count,j,mx;
	string s;
	cin>>T;
	while(T--){
	    cin>>s;
	    mx=0;
	    sort(s.begin(),s.end());
	    int n=s.length();
	    if(n%2!=0)cout<<"\nNO";
	    else {
	        for(i=0;i<n;i++){
	            count=1;
	        for(j=i+1;j<n;j++){
	            if(s[i]==s[j])count++;
	          }
	          mx=max(count,mx);
	        }
	        if(mx==n/2)cout<<"\nYES";
	        else cout<<"\nNO";
	    }
	}
	return 0;
}
