// #include <iostream>
// #include <string>
// using namespace std;
// int digit(int x) {
//     int k = 0;
//     while(x>0){
//         x /= 10;
//         k++;
//     }
//     return k;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x1,p1,x2,p2;
//         cin >> x1 >> p1 >> x2 >> p2;
//         int d1 = digit(x1) + p1;
//         int d2 = digit(x2) + p2;
//         if(d1 == d2){
//             string g1 = to_string(x1); 
//             string g2 = to_string(x2);
//             for(int i=0;i<p1;i++) g1+= '0';
//             for(int i=0;i<p2;i++) g2+= '0';
//             if(g1==g2) cout<<"="<<endl;
//             else if(g1 < g2) cout<<"<"<<endl;
//             else cout<<">"<<endl;
//         }
//         else if(d1 < d2) cout<<"<"<<endl;
//         else cout<<">"<<endl;
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1,p1,x2,p2;
        cin >> x1 >> p1 >> x2 >> p2;
        string s1 = to_string(x1);
        string s2 = to_string(x2);
        int d1=0,d2=0;
        if(p1 > p2) {
        d1 = s1.length()+p1-p2;
        d2 = s2.length();
        }
        else if(p2 > p1) {
        d1 = s1.length();
        d2 = s2.length()+p2-p1;
        }
        else {
        d1 = s1.length();
        d2 = s2.length();
        }
        if(d1 == d2){
            for(int i=0; i < abs(p1 - p2); i++) {
                if(p1 > p2) s1 += '0';
                else s2 += '0';
            }
            if(s1==s2) cout<<"="<<endl;
            else if(s1 < s2) cout<<"<"<<endl;
            else cout<<">"<<endl;
        }
        else if(d1 < d2) cout<<"<"<<endl;
        else cout<<">"<<endl;
    }
}