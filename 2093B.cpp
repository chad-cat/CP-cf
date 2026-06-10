#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int d = 0, m = 0;
        for (int i =n.size()-1; i>=0; i--) {
            if(n[i]!='0') {
                m = i;
                break;
            }
        }
        for (int i =0; i <m; i++) {
            if (n[i] == '0') {
                d++;
            }
        }
        cout <<(n.size())-d-1<< endl;
    }
}
