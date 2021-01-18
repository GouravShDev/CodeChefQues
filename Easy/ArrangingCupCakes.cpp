// Problem Code : RESQ
// url : https://www.codechef.com/problems/RESQ

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc,n,minDiff;
  cin>>tc;
  while(tc--){
      cin>>n;
      int i = 1;
      minDiff = INT_MAX;
      while(i <= sqrt(n)){
          if(n % i == 0){
              int d = n / i;
              if(minDiff > abs(d-i)) minDiff = d-i;
          }
          i++;
      }
      cout<<minDiff<<endl;
  }
  return 0;
}