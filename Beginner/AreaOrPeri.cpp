// Problem Code: AREAPERI
// url : https://www.codechef.com/problems/AREAPERI

#include <stdio.h>

int main(){
    int length, breath;
    scanf("%d %d", &length, &breath);
    int area = length * breath;
    int peri = 2 * (length + breath);

    if(area > peri){
        printf("Area\n");
        printf("%d\n" , area);
    }else if(peri > area){
        printf("Peri\n");
        printf("%d\n" , peri);
    }else{
        printf("Eq\n");
        printf("%d\n", area);
    }
    return 0;
}