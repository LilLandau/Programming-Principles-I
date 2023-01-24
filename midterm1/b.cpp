#include <iostream>
#include <cmath>
using namespace std;
int main(){
int size,size2,size3,b=0,x,y,x2,y2;
cin>>size>>size2>>size3;
int arr[size][size2];
for(int i=0;i<size;i++){
    for(int j=0;j<size2;j++){
        arr[i][j]=1;
    }
}

for(int i=0;i<size3;i++){
    cin>>x>>y>>x2>>y2;
    for(int j=x;j<x2;j++){
        for(int k=y;k<y2;k++){
            arr[j][k]=0;
        }
    }
}
for(int i=0;i<size;i++){
    for(int j=0;j<size2;j++){
        b=b+arr[i][j]; 
    }
}
cout<<b;
return 0;
}
