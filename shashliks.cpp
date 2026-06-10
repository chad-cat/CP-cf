#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int k,a,b,x,y;
    int g=0;
    int c=0;
    while(t--){
        cin>>k>>a>>b>>x>>y;
        if(x>y){
            for (int i=1;i<=(k/y);i++){
                if(k-y>=0&&k>b){
                    k=k-y;
                    g++;
                }
                else if(k>0&&k<k-y){
                    for(int j=1;j<=(k/x);j++){
                    k=k-x;
                    c++;
                }}
                else{
                    break;
                }
        }
    }
    else if (y>x){
            for (int i=1;i<=(k/x);i++){
                if(k-x>=0&&k>a){
                    k=k-x;
                    g++;
                }
                else if(k>0&&k<k-x){
                    for(int j=1;j<=(k/y);j++){
                    k=k-y;
                    c++;
                }}
                else{
                    break;
                }
        }
    }
    else if (x==y){
        for(int i=0;i<=(k/y);i++){
        if(k>0){
            k=k-y;
            g++;
        }
    }
    }

    
    int result=g+c;
    cout<<result<<endl;
}
}