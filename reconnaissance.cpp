#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,count=2000,i1,i2,i,j;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(j=0;j<n-1;j++)
        {
                if(abs(arr[j+1] - arr[j]) < count)
                {
                    count=abs(arr[j+1]-arr[j]);
                    i1=j;
                    i2=j+1;
                }
        }
        if(abs(arr[0] - arr[n-1]) < count)
        {
            count = abs(arr[0]-arr[n-1]);
            i1=0;
            i2=n-1;
        }
        cout<<i2+1<<" "<<i1+1;
}