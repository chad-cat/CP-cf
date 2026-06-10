#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin >> s;
        
        int k = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                k++;
            }
        }
        int total = k*n;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                total -=1;
            }
            else{
                total +=1;
            }
        }
        cout << total << endl;
    }
}
