// Problem Code: FLOW007
// url : https://www.codechef.com/problems/FLOW007

#include <iostream>
using namespace std;


int main(){
    int testcases, num;
    int rev;
    cin>>testcases;

    while (testcases--)
    {
        cin>>num;
        while(!(num % 10)){
            num = num / 10;
        }
        while(num){
            rev = rev + (num % 10);
            num/= 10;
            if(num) rev *= 10;
        }
        cout<<rev;
    }
    

}
