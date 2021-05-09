#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t n;
    string s, l, r;
    cin >> n >> s;
    l = s.substr(0, n);
    r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    bool strictly_less(true), strictly_more(true);
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }
    cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
    return 0;
}