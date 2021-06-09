#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a[101]={0};
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int p,s;
	        cin>>p>>s;
	        if(p<9&&a[p]<s)
	            a[p]=s;
	            
	    }
	    int sum=0;
	    for(int i=0;i<9;i++){
	        sum+=a[i];
	        
	    }cout<<sum<<endl;
	}
	return 0;
}