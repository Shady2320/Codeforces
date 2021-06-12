#include <bits/stdc++.h>
using namespace std;

bool valid(double d1, double d2, double d3, int r){
    if(d1<=r && d2<=r) return true;
    if(d1<=r && d3<=r) return true;
    if(d2<=r && d3<=r) return true;
    return false;
}

double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(){
    int t,r,x1,y1,x2,y2,x3,y3;cin>>t;
    double d1, d2, d3;
    while(t--){
        cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
        d1 = distance(x1,y1,x2,y2);
        d2 = distance(x2,y2,x3,y3);
        d3 = distance(x1,y1,x3,y3);
        if(valid(d1,d2,d3,r)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}