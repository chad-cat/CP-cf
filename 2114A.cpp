 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        double k=sqrt(stoi(s));
        if(floor(k)==k){
            cout<<(int)k<<" "<<0<<endl;
        }
        else
        cout<<-1<<endl;

    }
 }