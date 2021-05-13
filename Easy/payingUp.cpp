// Problem Code : MARCHA1
// url : https://www.codechef.com/problems/MARCHA1

#include <bits/stdc++.h>
using namespace std;
#define sync_off           \
  ios::sync_with_stdio(0); \
  cin.tie(0);
#define ll long long int

int payup(int currentCash, int remainingCash, int requiredCash, int cash[], int noOfNotes, int index)
{
  int x = 0, y = 0;
  if (currentCash == requiredCash)
  {
    return 1;
  }
  if (currentCash > requiredCash || (currentCash + remainingCash) < requiredCash || index >= noOfNotes)
  {
    return 0;
  }

  x = payup(currentCash + cash[index], remainingCash - cash[index], requiredCash, cash, noOfNotes,index+1);
  if (x != 1)
  {
    y = payup(currentCash, remainingCash - cash[index], requiredCash, cash, noOfNotes,index+1);
  }
  return (x + y);
}

int main()
{
  sync_off;
  int tc, n, m;
  cin >> tc;
  while (tc--)
  {
    cin >> n >> m;
    int money[20];
    int flags[20]{};
    int sum = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
      cin >> money[i];
      sum += money[i];
    }
    for (int i = 0; i < n; i++)
    {
      x= payup(0,sum,m,money,n,i);
      if(x==1){
        break;
      }
    }
    if(x){
      cout<<"Yes\n";
    }else{
      cout<<"No\n";
    }
    
  }
  return 0;
}