// Problem Code : SEDARR
// url : https://www.codechef.com/problems/SEDARR

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,k,sum;
  cin>>tc;
  while(tc--){
      cin>>n>>k;
      int num;
      sum = 0;
      for (int i = 0; i < n; i++)
      {
          cin>>num;
          sum += num;
      }
      if(sum % k == 0){
          cout<<"0\n";
      }else{
          cout<<"1\n";
      }
      
  }
  return 0;
}