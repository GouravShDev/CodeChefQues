// Problem Code : ERROR
// url : https://www.codechef.com/problems/ERROR

    #include<bits/stdc++.h>
    using namespace std;
    #define sync_off ios::sync_with_stdio(0);cin.tie(0);
    #define ll long long int
    
    int main(){
      sync_off;
      int tc;
      cin>>tc;
      string s;
      int flag;
      while(tc--){
          cin>>s;
          flag = 0;
          int length = s.length() - 2;
          for (int i = 0; i < length; i++)
          {
              if(s[i] == '1'){
                  if(s[i+1] == '0' && s[i+2] == '1'){
                      flag = 1;
                      break;
                  }
              }else{
                  if(s[i+2] == '0' && s[i+1] == '1'){
                      flag = 1;
                      break;
                  }
              }
          }
          if(flag){
              cout<<"Good\n";
          }else{
              cout<<"Bad\n";
          }
          
      }
      return 0;
    }