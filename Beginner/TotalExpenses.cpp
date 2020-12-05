// Problem Code: FLOW009
// url : https://www.codechef.com/problems/FLOW009

#include <stdio.h>

int main(){
    int testCases,quantity;
    float totalExp, price;
    scanf("%d", &testCases);
    while(testCases--){
        scanf("%d%f",&quantity, &price);
        totalExp =(float) quantity * price;
        if(quantity > 1000){
            totalExp = totalExp - (totalExp/10);
        }
        printf("%f\n", totalExp);
    }

    return 0;
}