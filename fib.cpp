#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

long long int fib[50],f,f0=0,f1=1;
void fibo()
{
    fib[0]=0;
    for(int i=1; i<=n; i++)
    {
        f=f0+f1;
        f1=f0;
        f0=f;
        fib[i]=f;
    }
}
int main()
{
    fibo();
    long long int n;
    while(cin >> n)
    {
        if(n==0)
            cout << '0' << ' ' << '0' << ' ' << '0' << '\n';
        else if(n==1)
            cout << '0' << ' ' << '0' << ' ' << '1' << '\n';
        else if(n==2)
            cout << '0' << ' ' << '1' << ' ' << '1' << '\n';
        else
        {
            for(int i=0; i<=n; i++)
            {
                if(fib[i]==n)
                {
                    cout << fib[i-1] << ' ' << fib[i-3] << ' ' << fib[i-4] << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}