// Problem Code : CHEFSUM
// url : https://www.codechef.com/problems/CHEFSUM


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        int min = INT_MAX;
        int index;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i] < min){
                min = arr[i];
                index = i;
            }
        }
        
        cout<<index+1<<endl;

        
    }
    return 0;
}