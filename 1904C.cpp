 #include <iostream>
 #include<vector>
 #include <algorithm>
 #include<cmath>
 #include<map>
 #include<set>
 #include<stack>
 #include<climits>
 

 using namespace std;
 void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<pair<long long,long long>> v;

    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    vector<long long> pre(n);
    pre[0]=v[0].first;
    for(int i=1;i<n;i++){
        pre[i]=v[i].first+pre[i-1];
    }
    vector<long long> ans(n);
    for(int i=0;i<n;i++){
        int j=i;
        int found =i;
        while(j<n){
            pair<long long,long long> temp={pre[j]+1,INT_MIN};
            long long idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
            idx--;
            if(idx==j) break;
            found+=idx-j;
            j=idx;

        }
        ans[v[i].second]=found;
    }
    for(int i=0;i<n;i++){

        cout<<ans[i]<<" ";
    }
    cout<<endl;

 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
 }