#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, arr[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int least = arr[n-1] - arr[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (arr[i+n-1] - arr[i] < least)
        {
            least = arr[i+n-1] - arr[i];
        }
    }
    cout<<least<<endl;
    return 0;
}