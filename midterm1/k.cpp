#include <iostream>
using namespace std;
int main(){
    int n,c=0;

    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int m;

    cin>>m;
 



    for(int i=0;i<n;i++){
        if(a[i]<=m and m<=b[i]){
            c++;
        }
    }

    cout<<c;
}