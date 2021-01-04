// Problem Code : BLKJK
// url : https://www.codechef.com/problems/BLKJK

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,lower,higher,swapNo;
  cin>>tc;
  while(tc--){
      cin>>n>>lower>>higher;
      int A[n];
      int flags[1001] = {0};
      for (int i = 0; i < n; i++)
      {
          cin>>A[n];
      }
      sort(A, A + n);
      swapNo = 0;
      int s = 0;
      for (int i = 0; i < n; i++)
      {
          s += A[i];
          int l = lower - s;
          int h = higher - s;
          for (int j = l; j < h; j++){
              flags[j] = 1;
          }
      }
      
      
  }
  return 0;
}