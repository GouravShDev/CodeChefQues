// Problem Code : AMSGAME
// url : https://www.codechef.com/problems/AMSGAME

//UNSOLVED

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

ll gcd(ll a, ll b){
    if(!b){
        return a;
    }
    return gcd(b, a%b);
}



int main(){
  sync_off;
  int tc,n;
  cin>>tc;
  while(tc--){
      cin>>n;
      ll numbers[n];
      for (int i = 0; i < n; i++)
      {
          cin>>numbers[i];
      }
      ll result = numbers[0];
      for (int i = 1; i < n; i++)
      {
          result = gcd(numbers[i] , result);
          if(result == 1){
              break;
          }
      }
      cout<<result<<endl;
  }
  return 0;
}