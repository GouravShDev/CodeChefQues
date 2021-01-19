// Problem Code : PCYCLE
// url : https://www.codechef.com/problems/PCYCLE


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

string visit(int visited[],int array[],int initialValue,int currentIndex){
    
    if(initialValue == currentIndex && visited[currentIndex]){
        return " "+to_string(currentIndex);
    }else{
        visited[currentIndex] = 1;
        if(initialValue == currentIndex){
            return to_string(currentIndex) + visit(visited,array, initialValue, array[currentIndex]);
        }else{
            return " "+to_string(currentIndex) + visit(visited,array, initialValue, array[currentIndex]);
        }
    }
}

int main(){
    sync_off;
    int n;
    cin>>n;
    int arr[n+1];
    int number = 0;
    int visited[1001] = {0};
    string result = "";
    for (int i = 1; i < n+1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        if(!visited[i]){
            number ++;
            result += visit(visited,arr,i,i) + "\n";
        }
    }
    cout<<number<<endl<<result;
    

    return 0;
}