// Problem Code: CHOPRT
// url : https://www.codechef.com/problems/CHOPRT

#include <iostream>

using namespace std;

int main(){
    int test, a, b;
    cin>>test;
    while(test--){
        cin>>a>>b;
        if(a>b){
            cout<<">";
        }else if (a<b)
        {
            cout<<"<";
        }else{
            cout<<"=";
        }
        cout<<endl;
        
    }
}