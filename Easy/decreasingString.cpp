// Problem Code : DECSTR
// url : https://www.codechef.com/problems/DECSTR


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    char alp[26];
    for (int i = 0; i <= 25; i++)
    {
        alp[i] = 'a' + i;
    }
    
    int tc,k,index;
    cin>>tc;
    while(tc--){
        cin>>k;
        if(k == 0) continue;
        while(k>=0){
            index = k % 26;
            cout<<alp[index];
            k--;
        }
        cout<<endl;
    }
    return 0;
}