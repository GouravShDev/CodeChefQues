// Problem Code : JOHNY
// url : https://www.codechef.com/problems/JOHNY

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,k;
  cin>>tc;
  
  while(tc--){
      cin>>n;
      int songs[n];
      for (int i = 0; i < n; i++)
      {
          cin>>songs[i];
      }
      cin>>k;
      int uj = songs[k-1];
      int pos = 1;
      for(int i =0; i < n; i++){
          if(songs[i] < uj){
              pos++;
          }
      }
      cout<<pos<<endl;
  }
  return 0;
}