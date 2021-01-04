// Problem Code : BILLRD
// url : https://www.codechef.com/problems/BILLRD

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
    ll x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        cin >> x >> y;

        if (x == y)
        {
            cout << n << " " << n << endl;
            continue;
        }
        if (k % 4 == 1)
        {
            ll m = x > y ? x : y;
            x = x + (n - m);
            y = y + (n - m);
        }
        else if (k % 4 == 2)
        {
            if (x > y)
            {
                x = n - x + y;
                y = n;
            }
            else
            {
                y = n - y + x;
                x = n;
            }
        }
        else if (k % 4 == 3)
        {
            if (x < y)
            {
                x = y - x;
                y = 0;
            }
            else
            {
                y = x - y;
                x = 0;
            }
        }
        else
        {
            if (x == 0 || y == 0)
            {
            }
            else
            {
                if (x < y)
                {
                    y = y - x;
                    x = 0;
                }
                else
                {
                    x = x - y;
                    y = 0;
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}