#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,arr[12],sum=0,n=12,count=0,a=0;
    cin >> k;
    for(i=0;i<12;++i)
    {
        cin>>arr[i];
    }
    for(j=0;j<12;j++)
    {
        sum = sum + arr[j];
    }
    if(sum<k)
    {
        cout<<"-1\n";
    }
    else
    {
        sort(arr, arr + sizeof(arr) / sizeof(arr[0]), greater<int>());
        while (count<k)
        {
            count = count + arr[a];
            a++;
        }
        cout<<a<<endl;
    }
    return 0;
}