// Problem Code : MAXDIFF
// url : https://www.codechef.com/problems/MAXDIFF

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc, n, k;
  ll sonsItems2, sonsItems1, totalItems,fatherItems1,fatherItems2;
  cin>>tc;
  while(tc--){
      cin>>n>>k;
      ll numbers[n];
      sonsItems2 = sonsItems1 = fatherItems1 = fatherItems2 = totalItems = 0;
      for (int  i = 0; i < n; i++)
      {
          cin>>numbers[i];
          totalItems += numbers[i];
      }
      sort(numbers, numbers+n);
      for(int i = 0; i < k ; i++){
          sonsItems1 += numbers[i];
      }
      for (int i = n-1; i >= n - k; i--)
      {
          sonsItems2 += numbers[i];
      }
      fatherItems1 = totalItems - sonsItems1;
      fatherItems2 = totalItems - sonsItems2;
      ll maxDiff = max(abs(fatherItems1 - sonsItems1), abs(fatherItems2 - sonsItems2));
      cout<<maxDiff<<endl;
      
  }
  return 0;
}