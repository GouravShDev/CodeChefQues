// Problem Code: CHEFSTLT
// url : https://www.codechef.com/problems/CHEFSTLT

#include <stdio.h>
#include <string.h>

int main(){
    int tc,min,max;
    char s1[100],s2[100];
    scanf("%d", &tc);
    while(tc--){
        scanf("%s", s1);
        scanf("%s", s2);
        max = min = strlen(s1);
        for(int i=0; i< strlen(s1); i++){
            if(s1[i] == s2[i]){
                if(s1[i] != '?'){
                    max--;
                }
                min--;
            }else{
                if(s1[i] == '?' || s2[i] == '?'){
                    min--;
                }
                
            }
        }
        printf("%d %d\n", min, max);

    }


}