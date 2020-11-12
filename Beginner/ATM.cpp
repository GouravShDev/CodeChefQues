#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    float acc; 
    int withdraw;
    cin>>withdraw;
    cin>>acc;
    if(withdraw+0.5>acc || withdraw % 5 != 0){
        printf("%.2f",acc);    
    }else{
        printf("%.2f", acc - withdraw - 0.5);
    }
    return 1;


}
