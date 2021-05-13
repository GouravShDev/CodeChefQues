// Problem Code : CARVANS
// url : https://www.codechef.com/problems/CARVANS


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, n,mCar;
    cin>>tc;
    while(tc--){
        cin>>n;
        long cars[n];
        for (int i = 0; i < n; i++)
        {
            cin>>cars[i];
        }
        mCar = 1;
        if(n>1){
            long maxSpeed = cars[0];
            for(int i = 1; i < n; i++){
                if(maxSpeed > cars[i]){
                    mCar++;
                    maxSpeed = cars[i];
                }
            }
        }

        cout<<mCar<<endl;   
    }
    return 0;
}