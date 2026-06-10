#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k||k==1) cout<<n<<endl;
        else{
	    int ans = 0;
	    while(n){
		ans += n%k;
		n /= k;
	    }
	    cout<<ans<<endl;
        }
    }
}
