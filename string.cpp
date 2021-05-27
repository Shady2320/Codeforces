#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string S1,S2;
	    cin>>S1>>S2;
	    int min=0,max=0;
	    int i;
	    for(i=0;i<S1.size();i++){
	        if(S1[i] == S2[i] && S2[i] == '?'){
	            max++;
	        }
	        else if(S1[i] != S2[i]){
	            if(S1[i] == '?' || S2[i] == '?'){
	                max++;
	            }
	            else{
	                max++;
	                min++;
	            }
	        }
	    }
	    cout<<min<<" "<<max<<" "<<endl;
	}
	return 0;
}