// Problem Code: FLOW013
// url : https://www.codechef.com/problems/FLOW013

#include <iostream>
using namespace std;
int main(){
    int test;
    int sum = 0;
    int angles[3];
    cin>>test;
    while(test--){
        for(int i=0;i<3;i++){
            cin>>angles[i];
            sum += angles[i];
        }
        if(sum == 180){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
        sum = 0;

    }
    return 0;
}