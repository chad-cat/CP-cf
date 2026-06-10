#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> count(26,0);
        for(auto c:s)count[c-'a']++;

        for(int i=0;i<26;i++){
        if(count[i]>=3)
        k=1;
        else if(count[i]==2&&(s[0]-'a'!=i||s.back()-'a'!=i))
        k=1;}
        if(k)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}