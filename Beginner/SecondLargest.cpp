// Problem Code: FLOW017
// url : https://www.codechef.com/problems/FLOW017

#include <iostream>
using namespace std;
int main(){
    int testCases, max;
    int middle;
    middle = max = -1;
    int a[3];
    cin>>testCases;
    while (testCases--)
    {
        for(int i=0; i<3;i++){
            cin>>a[i];
            if(a[i] > max){
                middle = max;
                max = a[i];
            }else{
                if(middle < a[i]){
                    middle = a[i];
                }
            }
        }
        cout<<middle<<endl;
        max = middle = -1;
    }
    
}