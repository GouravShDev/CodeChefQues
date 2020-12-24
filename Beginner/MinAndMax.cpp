// Problem Code: MNMX
// url : https://www.codechef.com/problems/MNMX

#include <stdio.h>
int minimum(int *arr, int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int tc;
    long long n,cost;
    int *arr;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lld",&n);
        cost = 0;
        arr = new int[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int i=1;
        int min = minimum(arr, n);
        while(i < n){
            min = min < arr[i] ? min : arr[i];
            i++;
            cost +=(long long) min;
        }
        printf("%lld\n", cost);
    }
    return 0;
}