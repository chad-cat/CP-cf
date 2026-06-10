#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
         int x, y, a;
    cin>>x>>y>>a;
    if (a % (x + y) < x) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
            
        }

    }
