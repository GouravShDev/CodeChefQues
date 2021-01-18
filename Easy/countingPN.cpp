// Problem Code : NUM239
// url : https://www.codechef.com/problems/NUM239


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc,l,h;
  cin>>tc;
  while(tc--){
      cin>>l>>h;
      int count = 0;
      for (int i = l; i <= h; i++)
      {
          if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9){
              count++;
          }
      }
      cout<<count<<endl;
  }
  return 0;
}