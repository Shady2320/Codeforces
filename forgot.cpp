#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l;
	    cin>>n>>k;
	    string a[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        c[i]="NO";
	    }
	    string b[k][50];
	    for(int i=0;i<k;i++)
	    {
	        cin>>l;
	        for(int j=0;j<l;j++)
	            cin>>b[i][j];
	    }
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<k;j++)
	       {
	           for(int x=0;x<50;x++)
	           {
	               if(a[i]==b[j][x])
	                    c[i]="YES";
	           }
	       }
	   }
	   for(int i=0;i<n;i++)
	       cout<<c[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
