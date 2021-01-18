// Problem Code : RIGHTRI
// url : https://www.codechef.com/problems/RIGHTRI


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
  sync_off;
  int n,x1,y1,x2,y2,x3,y3;
  int d1,d2,d3;
  int rightTriangles;
  cin>>n;
  rightTriangles = 0;
  while(n--){
      cin>>x1>>y1>>x2>>y2>>x3>>y3;
      d1 = pow((x1-x2), 2) + pow((y1-y2), 2);
      d2 = pow((x2-x3), 2) + pow((y2-y3), 2);
      d3 = pow((x1-x3), 2) + pow((y1-y3), 2);

      if((d1 == d2 + d3) || (d2 == d1 + d3) || (d3 == d1 + d2)){
          rightTriangles++;
      }
  }
  cout<<rightTriangles<<endl;

  return 0;
}