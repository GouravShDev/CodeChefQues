// Problem Code : VCS
// url : https://www.codechef.com/problems/VCS

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc,N,M,K,trackIg,untrackUnig;
  int *files;
  cin>>tc;
  while(tc--){
      cin>>N>>M>>K;
      files = new int[N]();
      trackIg = untrackUnig = 0;
      int index;
      for (int  i = 0; i < M; i++)
      {
        cin>>index;
        files[index]++;
      }
      for (int  i = 0; i < K; i++)
      {
        cin>>index;
        files[index]++;
      }
      for(int i = 1; i <= N; i++){
          if(files[i] == 2){
              trackIg++;
          }else if(files[i] == 0){
              untrackUnig++;
          }
      }

      cout<<trackIg<<" "<<untrackUnig<<endl;
  }
  return 0;
}