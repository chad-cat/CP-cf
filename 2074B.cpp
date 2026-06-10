#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s=0;
         for(int i=0;i<n;i++){
            cin>>a[i];}
        if(n==1){
        cout<<a[0]<<endl;}
        else{
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        cout<<(s-(n-1))<<endl;
    }

    }
}
//non degenerate triangle is nothing but a simple triangle
//and if we have to maximise one side of the triangle it will be a+b approx. equal to c i.e.
//as we need integer solution we will do a+b-1.
//this -1 will be applied n-1 time becoz n-1 numbers are the pair formed by the array of elements n.
//we consider 1 more case when question give n=1 so no pair form then value will be equal to n only.