// Problem Code: PPSUM
// url : https://www.codechef.com/problems/PPSUM

#include <stdio.h>

int main(){
    int testCases, d, n;
    scanf("%d", &testCases);
    while(testCases--){
        scanf("%d%d",&d,&n);
        while(d--){
            n = ((n+1)*n)/2;
        }
        printf("%d\n", n);
    }
    return 0;
}