#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int d,n,sum=0;
        cin>>d>>n;
        for(int j=0;j<d;j++){
            sum=n*(n+1)/2;
            n=sum;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
