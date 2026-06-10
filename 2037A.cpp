#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> hash(n + 1, 0); 
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) hash[a[i]]++;
        int k = 0;
        for(int i = 0; i <= n; i++){
        if(hash[i] == 2 && hash[i] % 2 == 0){k++;}
        else if(hash[i]>2&&(hash[i]-1)%2==0){k+=(hash[i]-1)/2;}
        else if(hash[i]>2&&hash[i]%2==0) {k+=(hash[i]/2);}}
        cout<<k<<endl;
    }
}
