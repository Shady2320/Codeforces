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
         int arr[n];
         int arr1[2*n+1];
         for(int i=0;i<=2*n;i++)
             arr1[i]=1e6;
         for(int i=0;i<n;i++){
             cin>>arr[i];
             arr1[arr[i]]=i+1;
    }
    int count=0;
    for(int i=3;i<2*n;i++)
    {
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0 && i!=j*j)
            {
                if(arr1[j]+arr1[i/j]==i)
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
	}
}