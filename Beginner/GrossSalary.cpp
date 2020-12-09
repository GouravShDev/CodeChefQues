// Problem Code: FLOW011
// url : https://www.codechef.com/problems/FLOW011

#include <stdio.h>

// Gross Salary = BS + HRA + DA
int main(){
    int tc;
    double bs;
    scanf("%d", &tc);
    
    while (tc--)
    {
        scanf("%lf", &bs);
        if(bs < 1500){
            bs = bs + bs*0.1 + bs*0.9;
        }else{
            bs = bs + 500 + bs*0.98;
        }

        printf("%.2lf\n", bs);
    }
    

    return 0;
}