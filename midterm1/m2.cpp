#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int a , b ;
    cin >> a >> b ;
    for(long long int i = -60 ; i < 60 ; i++){
        if(a* pow(2 , i) == b){
            cout <<"YES"<<" "<<i; 
            return 0 ;      
             }
    }  cout <<"NO";
}