// Problem Code: FLOW005
// url : https://www.codechef.com/problems/FLOW005

#include <iostream>

using namespace std;
int main(){
    int testCases, num;
    int notes = 0;
    cin>>testCases;
    while (testCases--)
    {
        cin>>num;
        while (num)
        {  
            if(num==1){
                notes++;
                num = num % 1;
            }else if(num >= 2 && num<5){
                notes += num / 2;
                num = num % 2;
            }else if(num >=5 && num<10){
                notes += num / 5;
                num = num % 5;
            }else if(num>=10 && num<50){
                notes += num/ 10;
                num = num % 10;
            }else if(num>=50 && num <100){
                notes += num/50;
                num = num % 50;
            }else{
                notes += num/100;
                num = num % 100;
            }

        }
        cout<<notes;
        cout<<endl;
        notes = 0;
    }
    
    return 0;
}