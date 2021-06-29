#include <iostream>
using namespace std;
int main() 
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
	    int count=0;
	    int sum = 1;
	    while(count <= n)
	    {
	        count = count + sum;
	        sum++;
	    }
	    cout<<(sum-2)<<endl;
	}
}	