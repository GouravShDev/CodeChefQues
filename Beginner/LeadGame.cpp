// Problem Code: TLG
// url : https://www.codechef.com/problems/TLG

#include <iostream>
using namespace std;

int main()
{
    int n, maxLead;
    maxLead = -1;
    int winningPlayer;
    int *p1, *p2;
    cin >> n;
    p1 = new int[n];
    p2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> p1[i] >> p2[i];
        if (i > 0)
        {
            p1[i] += p1[i - 1];
            p2[i] += p2[i - 1];
        }
        temp = p1[i] - p2[i];
        if (temp > 0 && maxLead < temp)
        {
            winningPlayer = 1;
            maxLead = temp;
        }
        else if (temp < 0 && maxLead < -temp)
        {
            winningPlayer = 2;
            maxLead = -temp;
        }
    }
    cout << winningPlayer << " " << maxLead;

    return 0;
}