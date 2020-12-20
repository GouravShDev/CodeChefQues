// Problem Code: TWOVSTEN
// url : https://www.codechef.com/problems/TWOVSTEN

#include <stdio.h>

int main(){
    int tc,num;
    scanf("%d",&tc);

    while(tc--){
        scanf("%d", &num);
        if(num%10 == 0){
            printf("0\n");
            continue;
        }
        if(num%5 == 0){
            printf("1\n");
        }else{
            printf("-1\n");
        }
    }
}