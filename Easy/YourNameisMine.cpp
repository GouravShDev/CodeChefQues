// Problem Code : NAME2
// url : https://www.codechef.com/problems/NAME2

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc;
  string man, woman;
  cin>>tc;
  while(tc--){
      cin>>man>>woman;
      if(man.length() > woman.length()){
          string temp = man;
          man = woman;
          woman = temp;
      }
      int i,j;
      i = j = 0;
      while(i < man.length() && j < woman.length()){
          if(man[i] == woman[j]){
              i++;
          }
          j++;
      }
      if(i == man.length()){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
      
      
  }
  return 0;
}