#include <iostream>
using namespace std;
int main(){
    int n,z=0,max=-1;
    cin>>n;
    int a[n];
    int b[n*n-n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                b[z]=a[i]*a[j];
                z++;
            }
        }
    }

    for(int i=0;i<n*n-n;i++){
        if(max<b[i]){
            max=b[i];
        }
    }

    cout<<max;

}