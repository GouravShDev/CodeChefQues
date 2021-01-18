// Problem Code : REMISS
// url : https://www.codechef.com/problems/REMISS


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc,A,B;
  cin>>tc;
  while(tc--){
      cin>>A>>B;
      int maxNum = A + B;
      int minNum = max(A,B);
      cout<<minNum<<" "<<maxNum<<endl;
  }
  return 0;
}