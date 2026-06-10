#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int a=1;
         while (n > 3) {
            n /= 4;
            a *= 2;
        }
        cout<<a<<endl;
}
}