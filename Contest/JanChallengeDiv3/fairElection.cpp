// Problem Code : FAIRELCT
// url : https://www.codechef.com/problems/FAIRELCT

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc,n,m,op;
  ll sumVotes1;
  ll sumVotes2;
  cin>>tc;
  while(tc--){
      cin>>n>>m;
      ll A[n];
      ll B[m];
      sumVotes1 = sumVotes2 = op = 0;
      for (int i = 0; i < n; i++)
      {
          cin>>A[i];
          sumVotes1 += A[i];
      }
      for (int i = 0; i < m; i++)
      {
          cin>>B[i];
          sumVotes2 += B[i];
      }
      sort(A,A+n);
      sort(B,B+m);
      int i=0;
      int j=m-1;
      while((sumVotes1 < sumVotes2 || sumVotes1 == sumVotes2) && i < n && j > 0){
          sumVotes1 = sumVotes1 - A[i] + B[j]; 
          sumVotes2 = sumVotes2 + A[i++] - B[j--];
          op++;
      }
      if(sumVotes1 > sumVotes2){
          cout<<op<<endl;
      }else{
          cout<<-1<<endl;
      }
  }
  return 0;
}