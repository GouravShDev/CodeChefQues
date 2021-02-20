// Problem Code : FROGS
// url : https://www.codechef.com/problems/FROGS

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc,n,hit;
    int W[5],x[5], L[5];
    cin>>tc;
    while(tc--){
        cin>>n;
        hit = 0;
        for (int i = 0; i < 5; i++)
        {
            W[i] = -1;
        }
        
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
            W[x[i]] = i+1;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>L[x[i]];
        }
        

        for (int i = 2; i < 5; i++)
        {
            while (W[i-1] >= W[i] && W[i] != -1)
            {
                W[i] += L[i];
                hit++;
            }
            
        }
        cout<<hit<<endl;
    }
    return 0;
}