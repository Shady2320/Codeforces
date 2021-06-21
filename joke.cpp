#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,x,y;
	cin>>t;
	while(t--){
	     int p=0;
	     cin>>n;
	    // cin>>x>>y;
	     for(i=1;i<=n;i++){
	          cin>>x>>y;
	          p=p^i;
	     }cout<<p<<endl;
	}
	return 0;
}