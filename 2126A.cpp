#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> k;
        while(n > 0){
            k.push_back(n % 10);
            n /= 10;
        }

        int c = k[0];
        for(int j = 1; j < k.size(); j++) {
            if(k[j] < c) c = k[j];
        }

        cout << c << endl;
    }
    return 0;
}
