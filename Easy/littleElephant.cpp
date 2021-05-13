// Problem Code : LEPERMUT
// url : https://www.codechef.com/problems/LEPERMUT


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, n, local, global;
    cin>>tc;
    while(tc--){
        cin>>n;
        int perm[n];
        for (int i = 0; i < n; i++)
        {
            cin>>perm[i];
        }
        int i,j;
        local = global = 0;
        for (i = 0; i < n; i++)
        {
            for (j = n-1; j > i; j--)
            {
                if(perm[i] > perm[j]){
                    if(j == i+1){
                        local++;
                    }
                    global++;
                }
            }
            
        }
        if(local == global){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}