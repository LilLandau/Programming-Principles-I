#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;

    cin>>n;
    m=n-1;
    int a[n],b[n/2],c[n/2],d[n/2];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n/2;i++){
        b[i]=a[i];
    }

    for(int i=n-1;n/2<=i;i--){
        c[m-i]=a[i];
    }
    /*
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n/2;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n/2;i++){
        cout<<c[i]<<" ";
    }
    */

    for(int i=0; i<n/2;i++){
        d[i]=0;
        while(c[i]>0){
            d[i]=d[i]*10+c[i]%10;
            c[i]/=10;
        }
    }

    for(int i=0; i<n/2;i++){
        if(b[i]==d[i]){

        }else{
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

}