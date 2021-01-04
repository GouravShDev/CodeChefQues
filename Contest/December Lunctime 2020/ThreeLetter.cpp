// Problem Code : THREE
// url : https://www.codechef.com/problems/THREE

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    sync_off;
    int tc, odd, even, coins;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        odd = even = coins = 0;
        int alp[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            alp[s[i] - 97]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if(alp[i] / 2 > 0 && alp[i] % 2== 0){
                coins+= alp[i] /2 ;
            } 
        }
        cout<<coins<<endl;
        
    }
    return 0;
}