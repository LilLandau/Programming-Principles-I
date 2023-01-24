#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double a,b;
    cin>>a>>b;
    long long c,d;
    c=a;
    d=b;
    if(b>=a){
    float lgf= log2f(b/a);
    int lg=log2(d/c);
    if(lg==lgf){
        cout<<"YES"<<" "<<log2(b/a);
    }else{
        cout<<"NO";
    }
    }else{
    float lgf= log2f(a/b);
    int lg=log2(c/d);
    if(lg==lgf){
        cout<<"YES"<<" "<<-log2(a/b);
    }else{
        cout<<"NO";
    }
    }

}