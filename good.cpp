#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a,b,c=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a>>b;
	        c=c^i;
	    }
	    cout<<c<<endl;
	}
	return 0;
}