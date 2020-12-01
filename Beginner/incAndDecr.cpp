// Problem Code: DECINC
// url : https://www.codechef.com/problems/DECINC

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(!(num % 4)){
        num++;
    }else{
        num--;
    }
    cout<<num<<endl;
    return 0;
}