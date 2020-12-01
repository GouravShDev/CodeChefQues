// Problem Code: FLOW008
// url : https://www.codechef.com/problems/FLOW008

#include <iostream>

using namespace std;

int main(){
    int t, n;
    string s = "Thanks for helping Chef!";
    cin>>t;
    while(t--){
        cin>>n;
        if(n<10){
            cout<<s<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}