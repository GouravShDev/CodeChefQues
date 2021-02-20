// Problem Code : PRIME1
// url : https://www.codechef.com/problems/PRIME1

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

// void getPrime(list<ll> *primeList,ll n,ll *lastSearch){
//     ll i;
//     if(*lastSearch > 0){
//         i = *lastSearch;
//     }else{
//         i = 5;
//     }
//     list<ll>::iterator it;
//     int flag;
//     while(i <= n){
//         flag = 0;
//         for (it = primeList->begin(); it != primeList->end(); it++)
//         {
//             if(i %  *it == 0){
//                 flag  = 1;
//                 break;
//             }
//         }
//         if(!flag){
//             primeList->push_back(i);
//         }
//         i+=2;
//         *lastSearch = i;
//     }

// }


int main(){
    sync_off;
    int tc;
    int lower, upper;
    cin>>tc;
    while(tc--){
        cin>>lower>>upper;
        for (int i = lower; i <= upper; i++)
        {
            int flag = 1;
            int sqrOfx = (int) sqrt(i);
            for (int j = 2; j <= sqrOfx; j++)
            {
                if(i % j == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag &&i > 1){
                cout<<i<<endl;
            }
        }
        cout<<endl;
        // getPrime(&pList, upper, &lastSearch);
        // list<ll>::iterator it;
        // for (it = pList.begin(); it != pList.end(); it++)
        // {
        //     if(*it <= upper){
        //         if(*it >= lower){
        //             cout<<*it<<endl;
        //         }
        //     }else{
        //         break;
        //     }
            
        // }
        // cout<<endl;
    }
    return 0;
}