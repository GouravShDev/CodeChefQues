// Problem Code : FLOW006
// Url : https://www.codechef.com/problems/FLOW006

#include <iostream>

using namespace std;
int main(){
    int testCase, number, digit;
    ios_base::sync_with_stdio(false);
    int sum = 0;
    cin>>testCase;
    while(testCase>0){
        cin>>number;
        while(number > 0){
            digit = number % 10;
            number = number / 10;
            sum += digit;
        }
        cout<<sum<<endl;
        sum = 0;
        testCase--;
    }
}