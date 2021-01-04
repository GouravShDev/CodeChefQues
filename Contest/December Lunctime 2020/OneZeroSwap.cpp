// Problem Code : SWAP10HG
// url : https://www.codechef.com/problems/SWAP10HG

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,mis1,mis0;
  string s, p;
  cin>>tc;
  while(tc--){
      cin>>n;
      cin>>s>>p;
      mis0 = mis1;
      for (int i = 0; i < n; i++)
      {
          if(s[i] != p[i]){
              if(s[i] == '1') mis1++;
              if(s[i] == '0') mis0++;
          }
      }
      if(mis0 != mis1){
          cout<<"No\n";
          continue;
      }
      int ones = 0;
      bool ans = true;
      for (int i = 0; i < n; i++)
      {
          if(s[i] != p[i]){
              if(s[i] == '0'){
                  ones--;
                  if(ones<0){
                      ans = false;
                      break;
                  }
              }else{
                  ones++;
              }
          }
      }
      if(ans){
          cout<<"Yes\n";
      }else{
          cout<<"No\n";
      }
  }
  return 0;
}