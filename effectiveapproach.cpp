#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n],num;
    for (int i = 0; i < n; i++) 
    {
           cin>>num;
           arr[num] = i + 1;
    }   
    long long int count = 0, sum = 0;
        int m,q;
        cin>>m;
        for (int i = 0; i < m; i++) 
        {
            cin>>q;
            count += arr[q];
            sum += n-arr[q]+1;             
        }
        
        cout<<count<<" "<<sum; 
}