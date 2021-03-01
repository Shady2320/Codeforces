#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	int n,a[1000],b[1000],i,j,k,l;
	int count=0;
	bool up[1000], low[1000], left[1000], right[1000];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
        scanf("%d %d", &a[i], &b[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(a[j]==a[k] && b[j]<b[k]) 
            {
            	up[j]=true;
            }	
            else if(a[j]==a[k] && b[j]>b[k]) 
            {
            	low[j]=true;
            }
            else if(a[j]>a[k] && b[j]==b[k])
            { 
            	left[j]=true;
            }	
            else if(a[j]<a[k] && b[j]==b[k]) 
            {
            	right[j]=true;
            }
        }
    }
    for(l=0;l<n;l++)
    {
        if(up[l]==true && low[l]==true  && left[l]==true && right[l]==true) 
        count++;
    }
    printf("%d\n", count);
}	