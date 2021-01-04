// Problem Code : TACHSTICK
// url : https://www.codechef.com/problems/TACHSTICK

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    sync_off;
    int pairs = 0;
    ll n, d;
    cin >> n >> d;
    queue<ll> q;
    ll chopsticks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> chopsticks[i];
    }
    sort(chopsticks, chopsticks + n);
    q.push(chopsticks[0] + d);
    int i = 1;
    while (i < n)
    {
        if (!q.empty())
        {
            if (chopsticks[i] <= q.front())
            {
                pairs++;
                q.pop();
                i++;
            }
            else{
                q.pop();
                q.push(chopsticks[i++] + d);
            }

        }
        else
        {
            q.push(chopsticks[i++] + d);
        }
    }
    cout << pairs << endl;
    return 0;
}