// Problem Code : PTUPLES
// url : https://www.codechef.com/problems/PTUPLES

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

bool isPrime(int x){
    int sqrOfx = (int) sqrt(x);
    int flag = 1;
    for (int j = 2; j <= sqrOfx; j++)
    {
        if(x % j == 0){
            flag = 0;
            break;
        }
    }
    if(flag &&x > 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    sync_off;
    int tc, n, pairs;
    cin>>tc;
    while(tc--){
        cin>>n;
        pairs = 0;
        int a=2, b=0, c=0;
        for (int i = 3; i <= n; i+=2)
        {
            if(isPrime(i)){
                c = b;
                b = a; 
                a = i;
            if(a == b + c){
                pairs++;
            }
            }
        }
        cout<<pairs<<endl;
    }
    return 0;
}