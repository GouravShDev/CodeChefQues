// Problem Code: TRICOIN
// url : https://www.codechef.com/problems/TRICOIN

#include <stdio.h>
#include <math.h>

int main(){
    int tc,height , coins;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d", &coins);
        height =  ((int)sqrt(1 + (8.0*coins))-1)/2;
        printf("%d\n", height);
    }
}