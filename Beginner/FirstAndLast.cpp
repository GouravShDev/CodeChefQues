// Problem Code: FLOW004
// url : codechef.com/problems/FLOW004

#include <iostream>
using namespace std;

int getLast(int x){
    return x%10;
}

int getFirst(int x){
    while(x >=10){
        x = x /10;
    }
    return x;
}
int main(){
    int testCase, num;
    cin>>testCase;
    while(testCase>0){
        cin>>num;
        
        cout<<getFirst(num) + getLast(num);
        cout<<endl;
        testCase--;
    }
    return 0;
}