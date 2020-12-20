// Problem Code: FRUITS
// url : https://www.codechef.com/problems/FRUITS

#include <stdio.h>
#include <algorithm>

int main(){
    int tc,n,m,k;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d%d", &n,&m,&k);
        int min = std::max(n,m) - std::min(std::min(n,m) + k,std::max(n,m));
        // int min = __INT_MAX__;
        // if(m<n){
        //     if(n - m <= k){
        //         printf("0\n");
        //         continue;
        //     }
        //     while(k>0){
        //         m++;
        //         if(n - m < min ) min = n-m;
        //         k--;
        //     }

        // }else{
        //     if(m-n <= k){
        //         printf("0\n");
        //         continue;
        //     }
        //     while(k>0){
        //         n++;
        //         if(m - n < min ) min = m-n;
        //         k--;
        //     }

        // }
        printf("%d\n", min);
    }
    return 0;
}