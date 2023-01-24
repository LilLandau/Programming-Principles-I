#include <iostream>
using namespace std;

int main(){
    int n;
    int lh=0,rh=0,lh1=0,rh1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            lh+=a[i];
            lh1+=1;
        }else{
            rh+=a[i];
            rh1+=1;
        }
    }

    cout<<"Left hand magic power: "<<lh*lh1<<endl;
    cout<<"Right hand magic power: "<<rh*rh1;
}
