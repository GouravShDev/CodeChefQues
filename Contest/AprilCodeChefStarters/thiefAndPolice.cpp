    // Problem Code : TANDP
    // url : https://www.codechef.com/problems/TANDP

    #include<bits/stdc++.h>
    using namespace std;
    #define sync_off ios::sync_with_stdio(0);cin.tie(0);
    #define ll long long int


    int main(){
        sync_off;
        int tc, n, m;
        int thiefX, thiefY, policeX, policeY, thiefMoves, policeMoves;
        
        cin>>tc;
        while(tc--){
            cin>>n>>m;
            cin>>thiefX>>thiefY>>policeX>>policeY;
            
            thiefMoves = n-thiefX + m-thiefY;
            if((policeX < (thiefX + 1) || policeY < (thiefY + 1)) && thiefMoves > 2){
                cout<<"NO\n";
                continue;
            }
            if(policeX > policeY){
                policeMoves = n-policeX;
                policeMoves += m-(policeY + policeMoves);
            }else{
                policeMoves = m-policeY;
                policeMoves += n-(policeX + policeMoves);
            }
            if(thiefMoves <= policeMoves){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }

        }

        return 0;
    }