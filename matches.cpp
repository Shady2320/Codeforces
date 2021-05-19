#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int arr[]={ 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
    cin >> n;
    while(n--)
    {
      int a,b,c,res,count=0;
      cin>>a>>b;
      c=a+b;
      while (c != 0)
		  {
			    res = c % 10;
			    count = count + arr[res];
			    c = c/10;
		  }
        cout << count << endl;
    }
    
	return 0;
}