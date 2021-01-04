// Problem Code : CSUB
// url : https://www.codechef.com/problems/CSUB

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc;
  ll n, substrings;
  char st[100001];
  cin>>tc;
  while(tc--){
      cin>>n;
      substrings = 0;
      cin>>st;
      for (int i = 0; i < n; i++)
      {
          if(st[i] == '1'){
              substrings++;
          }
      }
      substrings = (substrings*substrings + substrings)/2;
      cout<<substrings<<endl;
  }
  return 0;
}