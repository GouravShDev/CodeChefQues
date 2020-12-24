// Problem Code : CIELAB
// url : https://www.codechef.com/problems/CIELAB

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int A,B;
  cin>>A>>B;
  int c = A - B;
  if(c%10 == 9){
    c--;
  }else{
    c++;
  }
  cout<<c<<endl;
  return 0;
}