#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, m, arr[1000];
    cin>>n>>m;
    for(i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int mini(0), num(arr[0]), k(0);
    for (int i = 0; i < n; ++i)
    {
        mini += num;
        num -= 1;
        if (num == 0)
        {
            num = arr[++k];
        }
    }
    sort(arr, arr + m, greater<int>());
    int maxi(0);
    while(n--)
    {
        maxi += arr[0];
        arr[0] = arr[0] - 1;
        for (int i = 1; i < m; ++i)
        {
            if (arr[i] <= arr[i-1])
            {
                break;
            }
            swap(arr[i], arr[i-1]);
        }
    }
    cout << maxi << " " << mini << endl;
    return 0;
}