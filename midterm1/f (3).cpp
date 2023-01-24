#include <iostream>
using namespace std;
int main(){
    int n,d=0,rd=0,z=0,k=0;
    cin>>n;
    int a[n][n];
    int m=(n*n-n)/2;
    int b[m],c[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){

            }else{                    
                c[z]=a[j][i];
                z++;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){

            }else{
                    b[k]=a[i][j];
                    k++;
            }
        }
    }

    for(int i=0;i<m;i++){
            if(b[i]!=c[i]){
            cout<<"Not perfect.";
            return 0;
        }
    }

    cout<<"Perfect.";
    
}