// Problem Code : QJUMPS
// url : https://www.codechef.com/problems/QJUMPS

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

void generateSeries(int value);

int main(){
  sync_off;
  ll n;
  cin>>n;
  ll div = n / 3;
  if(n % 3 == 0 || (div % 2 == 0 &&n % 3 == 1)){
      cout<<"yes\n";
  }else{
      cout<<"no\n";
//   }
  return 0;
}

// void generateSeries(int value){
//     int i = 0;
//     int inc = 1;
//     while(i <= value){
//         cout<<i<<endl;
//         i+= inc;
//         if(inc == 1){
//             inc = 2;
//         }else if(inc == 2){
//             inc = 3;
//         }else{
//             inc = 1;
//         }
//     }
// }