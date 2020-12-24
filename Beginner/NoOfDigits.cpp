// Problem Code : HOWMANY
// url : https://www.codechef.com/problems/HOWMANY

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int noOfdigits(int n){
    int digits= 0;
    while(n){
        n /= 10;
        digits++;
    }
    return digits;
}
int main(){
  sync_off;
  int n;
  string s;
  cin>>n;
  n = noOfdigits(n);
  s = (n <= 3) ? to_string(n) : "More than 3 digits";
  cout<<s<<endl;
  return 0;
}