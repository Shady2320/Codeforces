#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,count=0,arr[26]={0};
	cin>>n;
	char str[1001];
	cin>>str;
    a = strlen(str);
	for(int i=0;i<a;++i)
	{
		arr[str[i]-97]++;
	}
	string ans="";
        for(int j=0;j<26;j++)
        {
        	if(arr[j]>0)
        	{
            		if(arr[j]%n==0)
               		 	for(int k=0;k<arr[j]/n;k++)
                    		ans+=char(j+97);
                else
                	count=-1;
                }
    	}
        if(count==-1)
        cout<<-1;
    else
    {
        for(int l=0;l<n;l++)
            cout<<ans;
    }

}