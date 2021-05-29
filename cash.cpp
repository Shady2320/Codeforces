#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, m, h0, m0, cnt=1, cash=1;
    scanf("%d", &n);
    scanf("%d%d", &h0, &m0);

    while (--n)
    {
        scanf("%d%d", &h, &m);
        if (h == h0 && m == m0)
        {
            cnt += 1;
            if (cnt > cash)
            {
                cash = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
        h0 = h;
        m0 = m;
    }
    printf("%d\n", cash);
    return 0;
}