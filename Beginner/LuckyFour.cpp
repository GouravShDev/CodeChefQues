// Problem Code: LUCKFOUR
// url : https://www.codechef.com/problems/LUCKFOUR

#include <iostream>
using namespace std;

int main(){
    int testCases, num,r;
    int count = 0;
    cin>>testCases;
    while(testCases--){
        cin>>num;
        while(num){
            r = num % 10;
            num /= 10;
            if(r==4) count++;
        }
        cout<<count<<endl;
        count = 0;
    }
}