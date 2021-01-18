// Problem Code : KOL15A
// url : https://www.codechef.com/problems/KOL15A


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int tc,count;
  string input;
  cin>>tc;
  while(tc--){
      cin>>input;
      count = 0;
      for (int i = 0; i < input.length(); i++)
      {
          if(input[i] > 47 && input[i] < 58 ){
              count += input[i]-'0';
          }   
      }
      cout<<count<<endl;
  }
  return 0;
}