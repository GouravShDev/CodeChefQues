// Problem Code : RRCOPY
// url : https://www.codechef.com/problems/RRCOPY

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc,n;
  cin>>tc;
  
  while(tc--){
      cin>>n;
      set <int> s;
      for (int i = 0; i < n; i++)
      {
          int x;
          cin>>x;
          s.insert(x);
      }
      cout<<s.size()<<endl;      
  }
  return 0;
}