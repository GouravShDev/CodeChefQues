// Problem Code : RPD
// url : https://www.codechef.com/problems/RPD

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);


int sumDigits(int num){
    int sum = 0;
    while(num){
        sum+= num % 10;
        num /= 10;
    }
    return sum;
}
int main(){
  sync_off;
  int tc,n,maxSum;
  cin>>tc;
  while(tc--){
      cin>>n;
      int numbers[n];
      maxSum = 0;
      for (int i = 0; i < n; i++)
      {
          cin>>numbers[i];
      }
      for (int i = 0; i < n; i++)
      {
          for(int j = i+1; j < n; j++){
              int prod = numbers[i] * numbers[j];
              prod = sumDigits(prod);
              if(prod > maxSum) maxSum = prod;
          }
      }
      cout<<maxSum<<endl;
         
  }
  return 0;
}