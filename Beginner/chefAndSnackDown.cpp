// Problem Code: SNCKYEAR
// url : https://www.codechef.com/problems/SNCKYEAR

#include <stdio.h>

int main(){
    int tc;
    char years[5][5] = {"2010", "2015","2016","2017","2019"};
    int flag; 
    char n[5];
    scanf("%d", &tc);
    while (tc--)
    {
        
        scanf("%s", n);
        flag =0;
        for(int i=0;i<5;i++){
            if(years[i][3]  == n[3]){
                printf("HOSTED\n");
                flag = 1;
                continue;
            }
        }
        if(!flag) printf("NOT HOSTED\n");

       
    }
    
    return 0;
}