#include <iostream>
using namespace std;

int main(){
    // flushing of cout
    cin.tie(NULL);
    // Turning off Synchronization
    ios_base::sync_with_stdio(false);
    int n, k,curr, count;
    count = 0;
    cin>>n>>k;
    while(n--){
        cin>>curr;
        if(curr % k == 0) count++;
    }
    cout<<count;
    return 0;
}