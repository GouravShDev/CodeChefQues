// Problem Code : SALARY
// url : https://www.codechef.com/problems/SALARY

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,moves;
  cin>>tc;
  while(tc--){
      cin>>n;
      int salaries[n];
      int min = INT_MAX;
      moves = 0;
      for (int i = 0; i < n; i++)
      {
          cin>>salaries[i];
          if(salaries[i] < min) min = salaries[i];
      }
      int i = 0;
      while(i<n){
          moves += (salaries[i++] - min);
      }
      cout<<moves<<endl;
  }
  return 0;
}