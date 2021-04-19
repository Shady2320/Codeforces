#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() 
{
   string s,s1;
   cin>>s;
   int a = s.length();
   for(int i=0;i<a;i++)
   {
	   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
		   continue;
	   else
	   {
		   s1= s1 + '.';
		   s1+=tolower(s[i]);
	   }

   }
 cout<<s1;
}