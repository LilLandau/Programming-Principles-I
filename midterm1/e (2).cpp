#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int sum=0;
    for(int i=1;i<a.size();i++){
        sum+=char(a[i])-'0';
    }

    if(sum%10==a[0]-'0'){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}