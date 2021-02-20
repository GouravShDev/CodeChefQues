// Problem Code : HDIVISR
// url : https://www.codechef.com/problems/HDIVISR

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
    int num;
    cin>>num;
    int i = 10;
    while(i>=1){
        if(num%i==0){
            cout<<i<<endl;
            break;
        }
        i--;
    }
    return 0;
}