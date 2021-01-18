#include <iostream>
using namespace std;

void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}

int main(){
    // flushing of cout
    cin.tie(NULL);
    // Turning off Synchronization
    ios_base::sync_with_stdio(false);
    int n, k,curr, count;
    count = 0;
    fastscan(n);
    fastscan(k);
    while(n--){
        cin>>curr;
        if(curr % k == 0) count++;
    }
    cout<<count;
    return 0;
}