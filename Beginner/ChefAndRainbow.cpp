// Problem Code : RAINBOWA
// url : https://www.codechef.com/problems/RAINBOWA

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc,n;
  int *arr;
  cin>>tc;
  while(tc--){
      cin>>n;
      int p1,p2;
      arr = new int[n];
      p1 = 0; p2 = n - 1;
      int flag = 1;
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
      }
      if(arr[p1] != 1){
          flag = 0;

      }else{
          while(p1<p2){
              if(arr[p1] != arr[p2]){
                  flag = 0;
                  break;
              }
              if(arr[p1] != arr[p1+1] && arr[p1+1] != arr[p1]+1){
                  flag=0;
                  break;
              }
              p1++;
              p2--;
          }
          if(arr[p1] > 7){
              flag=0;
          }
      }
      if(flag){
          cout<<"yes\n";
      }else{
          cout<<"no\n";
      }
      
  }
  return 0;
}



// int main(){
//   sync_off;
//   int tc,n;
//   int *array;
//   cin>>tc;
//   while(tc--){
//     cin>>n;
//     array = new int[n]();
//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];
//     }
//     int i=0;
//     int number = 1;
//     if(array[0] != 1){
//         cout<<"no"<<endl;
//         continue;
//     }
//     while(i<n/2){
//         if(array[i] == array[n-1-i] && array[i] == number){
//             i++;
//         }
//         else if(array[i] == array[n-1-i] && array[i] == number+1){
//             i++;
//             number++;
//         }else{
//             break;
//         }
//     }
//     if(i==n/2)
//     {   
//         if(n%2!=0){
//             if(array[i] != number+1 && array[i] != number){
//                 cout<<"no"<<endl;
//                 continue;
//             }
//         }
//         cout<<"yes"<<endl;
//     }else{
//         cout<<"no"<<endl;
//     }

//   }
//   return 0;
// }