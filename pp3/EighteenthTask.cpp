#include <bits/stdc++.h>

using namespace std;

int tr(int n){
    for(int d =2 ;d<=n/d;d++){
        if(n%d==0)
            return 1;
}
return 2; 
};
int main() 
{ 
    int n,g;
    cin>>n;
    g = tr(n);
    if(g == 1)
        cout<<"No";
     else 
        cout<<"Yes";
 return 0;
}