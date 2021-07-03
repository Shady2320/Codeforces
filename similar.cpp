#include <bits/stdc++.h>
#include <cmath>
#include <cstring> 
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
int main() {
	fast 
        ll t,count;
        cin>>t;
        while(t--){ 
    count=0; 
     string s[4];
        string k[4];
        for(ll i=0;i<4;i++){
            cin>>s[i];
        }
        for(ll i=0;i<4;i++){
            cin>>k[i];
        }
        for(ll i=0;i<4;i++){
            for(ll j=0;j<4;j++){
                if(s[i]==k[j]){
                    count++;
                }
            }
        }
        if(count<2) cout<<"dissimilar";
        else cout<<"similar"; 
    


        
    cout<<endl; 
        } 
    	return 0;
}