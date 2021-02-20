// Problem Code : MAXFUN
// url : https://www.codechef.com/problems/MAXFUN
#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    int tc,num,sum;
    cin>>tc;
    while(tc--){
        cin>>num;
        ll array[num];
        for (int i = 0; i < num; i++)
        {
            cin>>array[i];
        }
        ll max, min ,mid,sum=0;
        sort(array, array + num);
        min = array[0];
        max = array[num-1];
        mid = array[num/2];

        sum = abs(max-min)+ abs(min - mid) + abs(mid - max);
        cout<<sum<<endl;
    }
    return 0;
}