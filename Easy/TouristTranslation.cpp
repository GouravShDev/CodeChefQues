// Problem Code : TOTR
// url : https://www.codechef.com/problems/TOTR

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc;
  cin>>tc;
  string perm;
  cin>>perm;
  while(tc--){
      string bt;
      string transalated;
      cin>>bt;
      for (int i = 0; i < bt.length(); i++)
      {
          if(bt[i] >= 65 && bt[i] < 91){
              transalated += perm[bt[i]- 65] - 32;
          }else if(bt[i] >= 97 && bt[i] < 123){
              transalated += perm[bt[i] - 97];
          }else if(bt[i] == 95){
              transalated += " ";
          }else{
              transalated += bt[i];
          }
      }
      cout<<transalated<<endl;
  }
  return 0;
}