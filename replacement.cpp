#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n, index, count;
    bool rightDot, leftDot;
    cin>>n>>m;

    string s;
    char ch;
    cin>>s;

    count = 0;
    for(int j=1; j<n; j++)
    {
        if(s[j]==s[j-1] && s[j]=='.')
        count++;
    }

    for(int i=0; i<m; i++)
    {
        cin>>index>>ch;
        index--;

        if(ch == '.' && s[index] != '.')
        {
            if(index==0 || s[index-1] != '.')
                leftDot = false;
            
            else
                leftDot = true;
            

            if(index==n-1 || s[index+1] != '.')
                rightDot = false;
            
            else
                rightDot = true;
            
            if(leftDot && rightDot)
                count += 2;
            
            else if(leftDot || rightDot)
                count +=1;
        }

        else if(ch != '.' && s[index] == '.')
        {
            if(index==0 || s[index-1] != '.')
                leftDot = false;
            
            else
                leftDot = true;
            

            if(index==n-1 || s[index+1] != '.')
                rightDot = false;
            
            else
                rightDot = true;

            if(leftDot && rightDot)
                count -= 2;
            
            else if(leftDot || rightDot)
                count -=1;
            
        }

        s[index] = ch;
        cout<<count<<endl;
    }

    return 0;
}