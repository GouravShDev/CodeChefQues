// Problem Code : PERMUT2
// url : https://www.codechef.com/problems/PERMUT2

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    sync_off;
    int n, flag;
    while (true)
    {

        cin >> n;
        if(n==0) break;
        int arr[n + 1];
        int perm[n + 1];
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
            perm[arr[i]] = i;
        }
        flag = 1;
        for (int i = 1; i < n + 1; i++)
        {
            if(perm[i] != arr[i]){
                flag = 0;
            }
        }
        if(flag){
            cout<<"ambiguous";
        }else{
            cout<<"not ambiguous";
        }
        cout<<endl;
    }
    return 0;
}