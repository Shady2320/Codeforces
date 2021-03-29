#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			int a;
			cin>>a;
			if(a&1)
			{
				a1[i][j] = !a1[i][j];
				a1[i][j-1] = !a1[i][j-1];
				a1[i][j+1] = !a1[i][j+1];
				a1[i-1][j] = !a1[i-1][j];
				a1[i+1][j] = !a1[i+1][j];
			}
		}
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<a1[i][j];
		}
		cout<<endl;
	}
	return 0;
}