#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, k = 0;
        cin >> n >> s;
        
        int dx[n], dy[n], x[n], y[n];  // Declare all arrays of size n for safe indexing
        
        for(int i = 0; i < n; i++){
            cin >> dx[i] >> dy[i] >> x[i] >> y[i];
        }
        
        for(int i = 0; i < n; i++){
            if(x[i] + y[i] == s&&dx[i]*dy[i]==-1){
                
                    k++; 
                
            }
            else if(x[i] == y[i]&&dx[i]*dy[i]==1){
            {
                    k++;
                }
            }
        }
        
        cout << k << endl;
    }
}   
