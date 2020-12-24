// Problem Code : KTTABLE
// url : https://www.codechef.com/problems/KTTABLE

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc,num,students;
  int *time;
  int *reqTime;
  cin>>tc;
  while(tc--){
      cin>>num;
      time = new int[num+1]();
      reqTime = new int[num];
      students = 0;
      for (int i = 1; i <= num; i++)
      {
          cin>>time[i];
      }
      for (int i = 0; i < num; i++)
      {
          cin>>reqTime[i];
      }
      for(int i=0; i< num;i++){
          if(time[i+1]-time[i] >= reqTime[i]){
              students++;
          }
      }
      cout<<students<<endl;
      
  }
  return 0;
}