// Problem Code: AMR15A
// url : https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;

int main(){
    int n, evenSol, oddSol, num;
    evenSol = oddSol = 0;
    cin>>n;
    while (n--)
    {
        cin>>num;
        if(num % 2){
            oddSol++;
        }else{
            evenSol++;
        }
    }
    if(evenSol > oddSol){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
    cout<<endl;

    return 0;
}