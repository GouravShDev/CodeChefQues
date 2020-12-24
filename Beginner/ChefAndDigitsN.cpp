// Problem Code : LONGSEQ
// url : https://www.codechef.com/problems/LONGSEQ


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc, zeroCount, oneCount;
  string num;
  cin>>tc;
  while (tc--)
  {
      cin>>num;
      zeroCount = oneCount = 0;
      for(int i=0; i < num.length(); i ++){
          if(num[i] == '1'){
              oneCount++;
          }else if(num[i] == '0'){
              zeroCount++;
          }
      }
      if(oneCount == 1 || zeroCount == 1){
          cout<<"Yes"<<endl;
      }else{
          cout<<"No"<<endl;
      }
  }
  
  return 0;
}