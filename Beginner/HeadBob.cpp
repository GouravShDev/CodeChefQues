// Problem Code: HEADBOB
// url : https://www.codechef.com/problems/HEADBOB

#include <stdio.h>
#include <string.h>

int main(){
    int tc, n,flag;
    char gesture[1000];
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        scanf("%s", gesture);
        flag =0;
        for(int i =0; i< strlen(gesture);i++){
            if(gesture[i] == 'Y'){
                flag = 1;
                printf("NOT INDIAN\n");
                break;
            }else if(gesture[i] == 'I'){
                flag = 1;
                printf("INDIAN\n");
                break;
            }
        }
        if(!flag){
           printf("NOT SURE\n"); 
        }
        

    }

    return 0;
}