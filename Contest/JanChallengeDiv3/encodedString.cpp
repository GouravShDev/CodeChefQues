// Problem Code : DECODEIT
// url : https://www.codechef.com/problems/DECODEIT

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n, index;
  string input;
  char alp[16];
  for (int i = 0; i < 16; i++)
  {
      alp[i] = 97 + i;
  }
  cin>>tc;
  while(tc--){
      cin>>n;
      cin>>input;
      int c;
      for (int i = 0; i < n/4; i++)
      {
          c = 4 * i;
          index = 0;
          if(input[c+3] == '1'){
              index += 1;
          }
          if(input[c+2] == '1'){
              index += 2;
          }
          if(input[c+1] == '1'){
              index += 4;
          }
          if(input[c] == '1'){
              index += 8;
          }
          cout<<alp[index];
      }
      cout<<endl;
  }
  return 0;
}