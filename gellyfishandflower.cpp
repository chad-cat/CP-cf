#include <iostream>
using namespace std;

void result(int a,int b,int c,int d){
    if(a>b){
        if(c<b&&c<d){
            cout<<"Flower"<<endl;
        }
        else if(c>=b||c>=d){
            cout<<"Gellyfish"<<endl;
        }
    }
    else if(b>a){
        if (c>=d&&a>=d){
            cout<<"Gellyfish"<<endl;
        }
        else if(a<d){
            cout<<"Flower"<<endl;
        }
        else if(d<c){
            cout<<"Gellyfish"<<endl;
        }
     
     }
     else if(a==b){
        if(c>=b){
            cout<<"Gellyfish"<<endl;
        }
        else if(d>c)
        cout<<"FLower"<<endl;
     }
    

}
int main(){
    int t,A,B,C,D;
    cin>>t;
    while(t--){
        cin>>A>>B>>C>>D;
        result(A,B,C,D);
    }
}
