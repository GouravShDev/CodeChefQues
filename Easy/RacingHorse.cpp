// Problem Code : Horses
// url : https://www.codechef.com/problems/Horses

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc, n;
  cin>>tc;
  while(tc--){
      cin>>n;
      int horses[n];
      for (int i = 0; i < n; i++)
      {
          cin>>horses[i];
      }
      sort(horses, horses+n);
      int minDiff = INT_MAX;
      int currDiff;
      for (int i = 0; i < n - 1; i++)
      {
          currDiff = horses[i+1] - horses[i];
          if(minDiff > currDiff) minDiff = currDiff;
      }
      
      cout<<minDiff<<endl;
  }
  return 0;
}