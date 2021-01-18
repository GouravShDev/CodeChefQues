// Problem Code : AMSGAME
// url : https://www.codechef.com/problems/AMSGAME

//UNSOLVED

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
      ll numbers[n];
      int flag = 1;
      int even = 1;
      for (int i = 0; i < n; i++)
      {
          cin>>numbers[i];
          if(i>0){
              if(numbers[i] != numbers[i-1]&&flag){
                  flag = 0;
              }
          }
          if(even && (numbers[i] % 2 != 0)){
              even = 0;
          }
      }
      if(!flag){
          if(even){
              cout<<2<<endl;
          }else{
              cout<<1<<endl;
          }
      }else{
          cout<<numbers[0]<<endl;
      }
      
  }
  return 0;
}