// Problem Code : SPCANDY
// url : https://www.codechef.com/problems/SPCANDY

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    sync_off;
    int tc;
    ll n, k;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        ll candles, teacher;
        if (k == 0)
        {
            cout << 0 << " " << n<<endl;
        }
        else
        {
            candles = n / k;
            teacher = n % k;
            cout << candles << " " << teacher << endl;
        }
    }
    return 0;
}