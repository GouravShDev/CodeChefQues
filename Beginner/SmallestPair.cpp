// Problem Code: SMPAIR
// https://www.codechef.com/problems/SMPAIR

#include <stdio.h>

int main(){
    int tc, n,s1,s2;
    int *arr;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d",&n);
        arr = new int[n];
        s1 = s2 = __INT32_MAX__;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i] < s1){
                s2 = s1;
                s1 = arr[i];
            }else if(arr[i] < s2){
                s2 = arr[i];
            }
        }
        printf("%d\n", s1+s2);

    }
    return 0;
}