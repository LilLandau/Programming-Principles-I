#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c==1){
        for(int i=ceil(sqrt(a));i<=sqrt(b);i++){
            cout<<i*i<<" ";
        }
    }else{
        for(int i=sqrt(b);sqrt(a)<=i;i--){
            cout<<i*i<<" ";
        }
    }
}