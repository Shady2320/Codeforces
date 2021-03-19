#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string IntToString(int a) 
{ 
	char x[100]; 
	sprintf(x, "%d", a); 
	string s = x; 
	return s; 
}
int main()
{
	int n,a,b;
	string s1,s2,s3;
	cin>>n;
	while(n--)
	{
		cin>>s1;
		a = s1.length();
        b = a-2;
        s3 = IntToString(b);
        s2 = s1[0] + s3 + s1[a-1];
        if(a>10)
        {
        	cout<<s2<<endl;
        }
        else
        {
        	cout<<s1<<endl;
        }
        
	}
}