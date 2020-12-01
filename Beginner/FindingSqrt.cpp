// Problem Code: FSQRT
// https://www.codechef.com/problems/FSQRT

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int num, testcases;
    int rt;
    cin>>testcases;
    while (testcases--)
    {
       cin>>num;
       rt = sqrt(num);
       cout<<rt<<endl;
    }
    
}