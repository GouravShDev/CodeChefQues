// Problem Code : BUYING2
// url : https://www.codechef.com/problems/BUYING2

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc, n, sum, x;
  cin>>tc;
  while(tc--){
      cin>>n>>x;
      int notes[n];
      int min = INT_MAX;
      sum =0;
      for (int i = 0; i < n; i++)
      {
          cin>>notes[i];
          sum += notes[i];
          if(min > notes[i]) min = notes[i];
      }
      int r = sum % x;
      if(r < min){
          cout<<sum/x<<endl;
      }else{
          cout<<-1<<endl;
      }
  }
  return 0;
}