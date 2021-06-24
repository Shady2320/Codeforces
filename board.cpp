#include <iostream>
#include <algorithm>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int arr[2];
    for(int i=0;i<2;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<2;i++)
    {
      arr[i]=arr[i]-1;
    }
    cout<<arr[0]*arr[1]<<endl;
    

  }
  

  return 0;
}