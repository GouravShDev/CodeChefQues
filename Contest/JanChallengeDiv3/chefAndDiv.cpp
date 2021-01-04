// Problem Code : DIVTHREE
// url : https://www.codechef.com/problems/DIVTHREE

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n;
  ll k,d, totalQues;
  cin>>tc;
  while(tc--){
      cin>>n>>k>>d;
      ll ques[n];
      totalQues = 0;
      for (int i = 0; i < n; i++)
      {
          cin>>ques[i];
          totalQues += ques[i];
      }
      ll m = totalQues / k;
      if(m < d){
          cout<<m<<endl;
      }else{
          cout<<d<<endl;
      }
      
  }
  return 0;
}