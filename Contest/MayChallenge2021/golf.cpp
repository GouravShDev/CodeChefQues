// Problem Code : LKDNGOLF
// url : https://www.codechef.com/problems/LKDNGOLF


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc;
    ll noOfTiles, holeOnTile, bounceLength;
    cin>>tc;
    while(tc--){
        cin>>noOfTiles>>holeOnTile>>bounceLength;
        noOfTiles ++;
        if(holeOnTile % bounceLength == 0){
            cout<<"YES\n";
        }else if(noOfTiles % bounceLength == holeOnTile % bounceLength){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}