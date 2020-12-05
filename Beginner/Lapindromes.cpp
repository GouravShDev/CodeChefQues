// Problem Code: LAPIN
// url : https://www.codechef.com/problems/LAPIN

#include <stdio.h>
#include <string.h>

bool isLap(char s[]){
    int l[26] = {}, r[26] = {};
    
    for(int i=0, j=strlen(s)-1; i<strlen(s)/2; i++,j--){
        l[s[i]-'a']++;
        r[s[j]-'a']++;
    }

    for(int i=0; i<26;i++){
        if(l[i] != r[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int tc;
    char s[1000];
    scanf("%d", &tc);
    while(tc--){
        scanf("%s",s);
        if(isLap(s)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
    return 0;
}