// Problem Code : EASYPROB
// url : https://www.codechef.com/problems/EASYPROB


#include<iostream>
using namespace std;


void produceString(int num){
    int d, x = 0;
    if(num == 1){
        cout<<"2(0)";
    }else if(num == 2){
        cout<<"2";
    }else if(num == 3){
        produceString(2);
        cout<<'+';
        produceString(1);
    }else{
        cout<<"2(";
        while(num >= (1 << (x+1))){
            x++;
        }
        if(x > 0){
            produceString(x);
        }
        d = num - (1 << x);           // 1<<x = 2^x
        if(d > 0){
            cout<<")+";
            produceString(d);
        }else{
            cout<<")";

        }
    }
}


int main(){
    int array[] = {137,1315,73,136,255,1384,16385};
    for (int i = 0; i < 7; i++)
    {
        cout<<array[i]<<"=";
        produceString(array[i]);
        cout<<endl;
    }
    return 0;
}