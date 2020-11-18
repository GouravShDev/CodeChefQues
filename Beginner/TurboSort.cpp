// Problem Code: TSORT
// url: https://www.codechef.com/problems/TSORT

#include <iostream>
using namespace std;

int main(){
    int n;
    int length = 1000001;
    int * arr = new int[length];
    int index;
    cin>>n;
    for(int i=0; i< n;i++){
        cin>>index;
        arr[index]++;
    }
    for(int i=0; i<length; i++){
        while(arr[i] > 0){
           cout<<i<<endl;
           arr[i]--;
        }
        
    }
    return 0;
}
