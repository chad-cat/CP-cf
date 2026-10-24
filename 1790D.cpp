 #include<iostream>
 #include<vector>
 #include<cmath>
 #include<string>
 #include<algorithm>
 #include<map>
 using namespace std;
 void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    int total=0;
    for(auto& [el,freq]:mp){
        total+=max(mp[el]-mp[el-1],0);
    }
    cout<<total<<endl;
    
 }
 int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
 }