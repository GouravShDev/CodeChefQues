// Problem Code: GDOG
// url : https://www.codechef.com/problems/GDOG

#include<stdio.h>

int main(){
    int tc, coins, people,k = 1,max;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d",&coins,&people);
        max = 0;
        k = 1;
        while(k<=people){
            if(coins % k  > max) max = coins % k;
            k++;
        }
        printf("%d\n", max);
    }
    return 0;
}