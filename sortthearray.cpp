#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,flag1=0,flag2=0;
    cin>>n;
    int a[n+10],b[n+10],i,j,x=-1,y=-1,cnt=0;
    map<int,int>mp,mpp;
    for(i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=0;i<n;i++){
        mp[b[i]]=i;
    }
    for (int i = 0; i < n; i++) {
		a[i] = mp[a[i]];
	}
    for(i=0; i<n; i++)
    {
        if(a[i]!=i){
            x=i;
            break;
        }

    }
    for(i=n-1;i>=0;i--){
        if(a[i]!=i){
            y=i;
            break;
        }
    }
    if(x==-1&&y==-1){
        cout<<"yes"<<endl<<"1 1"<<endl;
    }
    else{
        reverse(a+x,a+y+1);
        for(i=0;i<n-1;i++){
            if(a[i]!=i)
            {
                flag1=1;
            }
        }
        if(flag1==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl<<x+1<<" "<<y+1<<endl;
    }



    return 0;
}