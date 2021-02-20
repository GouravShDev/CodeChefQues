// Problem Code : PASSWD
// url : https://www.codechef.com/problems/PASSWD

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc;
    string pass;
    int smallCh, capChar, digit, specialCh;
    cin>>tc;
    while(tc--){
        cin>>pass;
        smallCh = capChar = digit = specialCh = 0;
        if(pass.length() >= 10){
            for (int i = 0; i < pass.length(); i++)
            {
                if(pass[i] >= 'a' && pass[i] <= 'z'){
                    smallCh = 1;
                }else if(pass[i] >= 'A' && pass[i] <= 'Z' && i > 0 && i < pass.length()-1){
                    capChar = 1;
                }else if(pass[i] >= '0' && pass[i] <= '9'&& i > 0 && i < pass.length()-1){
                    digit = 1;
                }else if((pass[i] == '@' || pass[i] == '#' || pass[i] == '%' || pass[i] == '&' || pass[i] == '?')&& (i > 0 && i < pass.length()-1)){
                    specialCh = 1;
                }
            }
            if(smallCh && capChar && digit && specialCh){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}