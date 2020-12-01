// Problem Code: FLOW007
// url : https://www.codechef.com/problems/FLOW007

#include <iostream>
using namespace std;


int main(){
    int testcases, num, rem;
    int rev;
    cin>>testcases;

    while (testcases--)
    {
        cin>>num;
        if(num == 0) {
            cout<<0<<endl;
            continue;
        }
        
        while(num){
            rev = rev * 10 + (num % 10);
            num/= 10;
        }
        cout<<rev<<endl;
        rev = 0;
    }
    

}
