#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int arr[101]={};
        long long int n;
        cin>>n;
        long long int arr1[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr1[j];
            arr[arr1[j]]++;
        }
        sort(arr,arr+101,greater<int>());
        long long int largest=arr[0];
        cout<<n-largest<<endl;
    }
    return 0;
}