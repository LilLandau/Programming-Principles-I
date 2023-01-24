#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,sum=-1,sum2=0,z=0;
    cin >> n;
    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j and a[i]==a[j]){
                b[i]++;

            }
        }
    }

    for(int i=0;i<n;i++){
        if(sum<b[i]){
            sum=b[i];
        }
    }

    for(int i=0;i<n;i++){
        if(b[i]==sum){
            sum2++;
        }
    }
    int c[sum2];
    for(int i=0;i<n;i++){
        if(b[i]==sum){
            c[z]=a[i];
            z++;
        }
    }

    for (int i = 0; i < sum2 - 1; i++) {
    for (int j = i + 1; j < sum2; j++){
    if (c[i]==c[j]) 
        { 
        for (int k = j; k < sum2; k++) 
        c[k]=c[k + 1]; 
        sum2--;
        j--;
    } } }

    sort(c, c + sum2);

    for(int i=sum2-1;0<=i;i--){
        cout<<c[i]<<" ";
    }
}