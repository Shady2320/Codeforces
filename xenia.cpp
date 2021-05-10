#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, count[8] = {0};
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        count[x] += 1;
    }

    bool solution;
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            cout<<"1"<<" "<<"2"<<" "<<"4"<<endl;
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            cout<<"1"<<" "<<"2"<<" "<<"6"<<endl;
        }
        for (int i = 0; i < count[3]; ++i)
        {
            cout<<"1"<<" "<<"3"<<" "<<"6"<<endl;
        }
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}