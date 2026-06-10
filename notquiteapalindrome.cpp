#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){


int o = 0, z = 0;

int n, k; cin >> n >> k;
for(int i = 0; i < n; i++) 
{ char c; cin >> c; 
    if(c == '0')
     z++; 

    else o++;

}

int up = (n - 2*k)/2;

if(z >= up && o >= up && (z-up)%2==0&& (o-up)%2==0) 
cout<<"YES\n";


else 

cout<<"NO\n";

}
    }
