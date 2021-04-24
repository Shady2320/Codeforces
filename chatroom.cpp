#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, count = 0;
int main() 
{
    cin >> a;
    for (int i = 0; i < a.size(); i++) 
    {
        if (a[i] == b[j]) 
        {
            j++;
            count++;
            if (count == 5) {
                break;
            }
        }
    }
    if (count == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}