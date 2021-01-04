// Problem Code : CNOTE
// url : https://www.codechef.com/problems/CNOTE

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  // x - pages long poetry
  // y - pages left
  // n - no of notebook
  // k - rubbles
  int tc,x,y,k,n;
  int flag;
  cin>>tc;
  while(tc--){
      cin>>x>>y>>k>>n;
      int pageReq = x - y;
      flag = 0;
      int page[n], cost[n];
      for (int i = 0; i < n; i++)
      {
          
          cin>>page[i]>>cost[i];
      }
      for (int i = 0; i < n; i++){
          if(pageReq <= page[i] && cost[i] <= k){
              flag = 1;
              break;
          }
      }
      if(flag){
          cout<<"LuckyChef";
      }else{
          cout<<"UnluckyChef";
      }
      cout<<endl;
      
  }
  return 0;
}