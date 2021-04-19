// Problem Code : CLEANUP
// url : https://www.codechef.com/problems/CLEANUP


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, n, m;
    cin>>tc;
    while(tc--){    
        cin>>n;
        cin>>m;
        list<int> chef;
        list<int> assistant;
        int tempIndex;
        int jobs[1001] = {};
        for(int i = 0; i < m; i++){
            cin>>tempIndex;
            jobs[tempIndex] = 1;
        }
        int cheflag = 1;
        for(int i = 1; i <= n; i++){
            if(jobs[i] == 0 && cheflag){
                chef.push_back(i);
                cheflag = 0;
            }else if(jobs[i] == 0 && !cheflag){
                assistant.push_back(i);
                cheflag = 1;
            }
        }

        for(auto it = chef.cbegin(); it!= chef.cend(); it++){
            cout<<*it<<" ";
        }

        cout<<endl;
        for(auto it = assistant.cbegin(); it!= assistant.cend(); it++){
            cout<<*it<<" ";
        }

        cout<<endl;


    }
    return 0;
}