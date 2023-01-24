#include <iostream>
using namespace std;

int main(){
    int a,max=-1,min=1000000,b;
    cin>>a;


    while(a!=0){
        b=a%10;
        a/=10;
        if(max<b){
            max=b;
        }
        if(min>b){
            min=b;
        }
    }

    
    cout<<max<<" "<<min; 


}