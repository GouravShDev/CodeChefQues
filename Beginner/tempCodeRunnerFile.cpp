// Problem Code: TRICOIN
// url : https://www.codechef.com/problems/TRICOIN

#include <stdio.h>
#include <math.h>

int main(){
    int tc;
    long long int height , coins;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d", &coins);
        height = (sqrt(1 + (8*coins))-1)/2;\
        printf("%lld\n", height);
    }
}