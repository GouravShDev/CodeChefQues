// Problem Code: RECTANGL
// url : https://www.codechef.com/problems/RECTANGL

#include <stdio.h>

int main(){
    int tc,a,b=-1, af = 0,bf = 0;
    int sides[4];
    scanf("%d", &tc);

    while (tc--)
    {
        for(int i=0;i<4;i++){
            scanf("%d", &sides[i]);
        }
        a = sides[0];
        for(int i=1; i<4;i++){
            if(b==-1 && a!=sides[i]){
                b = sides[i];
            }else if(a==sides[i]){ af = 1;} else if(b==sides[i]) bf = 1;
        }
        if(af && bf){
            printf("YES");
        }else{
            printf("NO");
        }

    }
    
    return 0;
}