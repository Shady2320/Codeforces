#include<bits/stdc++.h>
using namespace std;
struct pair{
    int min;
    int max;
};
struct pair getMinMax(int arr[], int n)
{
    struct pair minmax;
    if(n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if(arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i] > minmax.max)
            {
                arr[i] = minmax.max;
            }
            else if(arr[i] < minmax.min)
            {
                arr[i] = minmax.min;
            }
    }
    return minmax;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    struct pair minmax = getMinMax(arr, n);
    cout<<"Minimum elment is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max<<endl;
}