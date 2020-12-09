// Problem Code: FLOW014
// url : https://www.codechef.com/problems/FLOW014

#include <stdio.h>

int main(){
    int tc;
    float hardness, carbon , tensileS;
    float idealHD = 50;
    float idealCC = 0.7;
    float idealTS = 5600; 
    scanf("%d", &tc);
    while(tc--){
        scanf("%f%f%f",&hardness,&carbon,&tensileS);
        if(hardness>idealHD){
            if(carbon<idealCC){
                if(tensileS > idealTS){
                    printf("10\n");
                }else{
                    printf("9\n");
                }
                continue;
            }else{
                if(tensileS>5600){
                    printf("7\n");
                }else{
                    printf("6\n");
                }
                continue;
            }
        }else if(carbon<idealCC){
            if(tensileS > idealTS){
                printf("8\n");
            }else{
                printf("6\n");
            }
            continue;
        }else if(tensileS > idealTS){
            printf("6\n");
            continue;
        }else{
            printf("5\n");
        }
    }
    return 0;
}