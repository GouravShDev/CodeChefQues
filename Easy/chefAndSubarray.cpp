// Problem Code : CHEFZOT
// url : https://www.codechef.com/problems/CHEFZOT

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    int maxSubArr = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            count++;
        }else{
            count = 0;
        }
        if(count > maxSubArr){
            maxSubArr = count;
        }
    }
    cout<<maxSubArr<<endl;
    
    return 0;
}