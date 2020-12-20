// Problem Code: TWTCLOSE
// url : https://www.codechef.com/problems/TWTCLOSE

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,k,d;
    int *tweets;
    int openT = 0;
    string st;
    scanf("%d%d",&n,&k);
    tweets = new int[n+1]();
    while(k--){
        cin>>st;
        if(st == "CLOSEALL"){
            for(int i =1; i <=n;i++){
                tweets[i] = 0;      
            }
            openT = 0;
            printf("%d\n", openT);
            continue;
        }else{
            scanf("%d", &d);
            if(tweets[d]){
                tweets[d]--;
                openT--;
            }else{
                tweets[d]++;
                openT++;
            }
        }
        printf("%d\n",openT);

    }
}