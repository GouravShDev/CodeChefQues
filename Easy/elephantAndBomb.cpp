// Problem Code : LEBOMBS
// url : https://www.codechef.com/problems/LEBOMBS

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[1001] = {0};
        for (int i = 1; i < n+1; i++)
        {
            char x;
            cin>>x;
            if(x=='0'){
                arr[i] = -1;
            }else{
                arr[i] = 1;
            }
        }
        for (int i = 1; i < n+1; i++)
        {
            if(arr[i] == 1){
                if(i>0){
                   arr[i-1] = 1; 
                }
                if(i < 1001){
                    if(arr[i+1] != 1){
                        arr[i+1] = 1;
                        i++;
                    }
                }
            
            }
        }
        int count = 0;
        for (int i = 1; i < 1002; i++)
        {
            if(arr[i] == -1){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}