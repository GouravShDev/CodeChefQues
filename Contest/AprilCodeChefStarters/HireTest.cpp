// Problem Code : HIRETEST
// url : https://www.codechef.com/problems/HIRETEST

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    sync_off;
    int tc, noOfCandidates, problems, unSolved, problemCutoff, partialProblemCutoff, f, p;
    cin >> tc;

    while (tc--)
    {
        cin >> noOfCandidates >> problems;
        cin >> problemCutoff >> partialProblemCutoff;
        string candidateResults[noOfCandidates];

        
        for (int i = 0; i < noOfCandidates; i++)
        {
            cin >> candidateResults[i];
        }

        for (int i = 0; i < noOfCandidates; i++)
        {
            p = f = 0;
            for (int j = 0; j < problems; j++)
            {
                if (candidateResults[i][j] == 'F')
                {
                    f++;
                }
                else if (candidateResults[i][j] == 'P')
                {
                    p++;
                }
            }
            if (f >= problemCutoff || (f >= (problemCutoff - 1) && p >= partialProblemCutoff))
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
            
        }
        cout<<endl;
    }
    return 0;
}