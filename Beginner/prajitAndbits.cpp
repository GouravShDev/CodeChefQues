// Problem Code : ADDI
// url : https://www.codechef.com/problems/ADDI

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int noOfzeros(int x){
    int count = 0;
    int i = x;
    while(x){
        x = x & (1 << i);
        if(i = x){
            count++;
        }
        i = x;
    }
    return count;
}

int main(){
  sync_off;
  int tc,n;
  cin>>tc;
  while(tc--){
      cin>>n;
      cout<<noOfzeros(n);
  }
  return 0;
}