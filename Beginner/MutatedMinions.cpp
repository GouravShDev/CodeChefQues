// Problem Code : CHN15A
// url : https://www.codechef.com/problems/CHN15A

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc,n,k;
  cin>>tc;
  int mutatedMinions;
  while(tc--){
      cin>>n>>k;
      int minions[n];
      mutatedMinions = 0;
      for (int  i = 0; i < n; i++)
      {
          cin>>minions[i];
          minions[i] += k;
          if(minions[i] % 7 == 0){
              mutatedMinions++;
          }
      }
      cout<<mutatedMinions<<endl;
      
  }
  return 0;
}