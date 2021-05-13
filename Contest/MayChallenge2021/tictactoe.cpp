// Problem Code : TCTCTOE
// url : https://www.codechef.com/problems/TCTCTOE

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int checkDraw(string board[])
{
    if (board[0].find('_') != string::npos || board[1].find('_') != string::npos || board[2].find('_') != string::npos)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void checkResult(string board[])
{
    int wins = 0;
    int xWins = 0;
    int xCount, oCount;
    xCount = oCount = 0;
    for (int i = 0; i < 3; i++)
    {

        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && board[i][0] != '_')
        {
            if(board[i][0] == 'X') xWins = 1;
            wins++;
        }
        if ((board[0][i] == board[1][i] && board[1][i] == board[2][i]) && board[0][i] != '_')
        {
            if(board[0][i] == 'X') xWins = 1;
            wins++;
        }

        for (int j = 0; j < 3; j++)
        {
            if(board[i][j] == 'X'){
                xCount++;
            }else if(board[i][j] == 'O'){
                oCount++;
            }
        }
        
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && board[2][2] != '_')
    {
        if(board[0][0] == 'X') xWins = 1;
        wins++;
    }
    if ((board[0][2] == board[1][1] && board[1][1] == board[2][0]) && board[2][0] != '_')
    {
        if(board[0][2] == 'X') xWins = 1;
        wins++;
    }

    int diff = oCount - xCount;
    if(abs(diff) > 1 || diff>0 ||wins > 1){
        cout<<3;
    }else if(wins == 1){
        if(xWins == 1 && diff != -1){
            cout<<3;
        }else if(xWins == 0 && diff != 0){
            cout<<3;
        }else{
            cout<<1;
        }
    }else{
        if (checkDraw(board))
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
    }
    cout<<endl;
}


int main()
{
    sync_off;
    int tc;
    string boardStr[3];
    cin >> tc;
    while (tc--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> boardStr[i];
        }
        checkResult(boardStr);
    }
    return 0;
}