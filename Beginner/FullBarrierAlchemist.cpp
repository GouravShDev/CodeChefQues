// Problem Code: PIPSQUIK
// url : https://www.codechef.com/problems/PIPSQUIK

#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    // Turning off Synchronization
    ios_base::sync_with_stdio(false);
    int T, noOfBarrier, height, duckH, jumpH, lifeF;
    int passBarrier = 0;
    int duckL;
    int type, barrier;
    int * passArr;
    cin>>T;
    int index = 0;
    passArr = new int[T];
  
    while(T>0){  
        cin>>noOfBarrier>>height>>duckH>>jumpH>>lifeF;
        int duckL = height - duckH;
        while(noOfBarrier>0){
            cin>>type;
            cin>>barrier;
            if(lifeF == 0) {
                noOfBarrier--;
                continue;}
            if(type == 1){
                if(barrier >= duckL){
                    passBarrier++;
                }else{
                    lifeF--;
                    if(lifeF != 0)
                    passBarrier++;
                }
            }else{
                if(barrier <= jumpH){
                    passBarrier++;
                }else{
                    lifeF--;
                    if(lifeF != 0)
                    passBarrier++;
                }

            }
            noOfBarrier--; 
        }
        
        T--;
        passArr[index++] = passBarrier;
        passBarrier = 0;
    }
    for(int i=0; i < index; i++){
        cout<<passArr[i]<<endl;
    }
    

    return 0;

}