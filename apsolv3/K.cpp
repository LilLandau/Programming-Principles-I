#include <bits/stdc++.h>

using namespace std;

#define charToInt(c) (c-'0')

int main (){

   string str;
   int sum = 0;
   cin >> str;
   
   for(int i = 0;i < str.size();i++){
      int a = charToInt(str[i]);

      if (a==1){
         sum += pow(2,str.size()-i-1);
      } 
      else if (a==0){
         sum += 0;
      }
    } 
    cout << sum ;
}