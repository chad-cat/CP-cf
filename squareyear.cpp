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
            if(((int)k)%2==0){
                cout<<(int)k/2<<" "<<(int)k/2<<endl;
            }
            else{
                cout<<(int)(k/2 - 0.5)<<" "<<(int)(k/2 + 0.5)<<endl;
            }
        }
        else
        cout<<"-1"<<endl;

    }
 }