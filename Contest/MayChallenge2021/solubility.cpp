// Problem Code : SOLBLTY
// url : https://www.codechef.com/problems/SOLBLTY

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, degree, solubility, solubilityIncPerTemp;
    cin>>tc;
    while(tc--){
        cin>>degree>>solubility>>solubilityIncPerTemp;
        int sugarYesPlease = (solubility + (100-degree)*solubilityIncPerTemp)*10;
        cout<<sugarYesPlease<<endl;
    }
    return 0;
}