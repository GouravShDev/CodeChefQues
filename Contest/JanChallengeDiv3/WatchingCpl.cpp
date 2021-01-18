// Problem Code : WIPL
// url : https://www.codechef.com/problems/WIPL

#include <bits/stdc++.h>
using namespace std;
#define sync_off             \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int

int main()
{
    //sync_off;
    int tc, n, k, tower1, tower2, minBox;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        int num[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            sum += num[i];
        }
        if (sum < k * 2 || n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        sort(num, num + n);

        minBox = 0;
        int s = 0;
        int i = n-1;
        int z = 0;
        int d = 0;
        while((d < 2 && i >= 0) || z % 2 != 0){
            s += num[i--];
            minBox++;
            z++;
            d = s / k;
        }
         cout<<minBox<<endl;
        // tower1 = tower2 = 0;
        // minBox = 1;
        // tower1 = num[n - 1];
        // num[n - 1] = 0;
        
        // int reqNum;
        // while (tower1 < k)
        // {   
        //     reqNum = k - tower1;
        //     int i = 0;
        //     while (i < n && reqNum > num[i])
        //     {
        //         i++;
        //     }
        //     minBox++;
        //     tower1 += num[i];
        //     num[i] = 0;
        // }
        // int j = n-1;
        // while(j >= 0 && tower2 < k){
        //     if(num[j] > 0){
        //         tower2 += num[j];
        //         minBox++;
        //     }
        //     j--;
        // }
       
    }
    
}

// int main()
// {
//     sync_off;
//     int tc, n, k, sum, minBox;

//     cin >> tc;
//     while (tc--)
//     {
//         cin >> n >> k;
//         int x;
//         sum = minBox = 0;
//         int num[101] = {0};
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x;
//             sum += x;
//             num[x]++;
//         }
//         if (k * 2 > sum)
//         {
//             cout << -1 << endl;
//             continue;
//         }
//         int tower1, tower2;
//         tower1 = tower2 = 0;
//         int flag = 1;
//         for (int i = 100; i > 0; i--)
//         {
//             while (num[i]-- > 0)
//             {
//                 if (flag)
//                 {
//                     tower1 += i;
//                     minBox++;
//                     flag = 0;
//                     if (tower2 >= k)
//                     {
//                         flag = 1;
//                     }
//                 }
//                 else
//                 {
//                     tower2 += i;
//                     minBox++;
//                     flag = 1;
//                     if (tower1 >= k)
//                     {
//                         flag = 0;
//                     }
//                 }
//                 if (tower1 >= k && tower2 >= k)
//             {
//                 break;
//             }
//             }
//             if (tower1 >= k && tower2 >= k)
//             {
//                 break;
//             }
//         }

//         cout << minBox << endl;
//     }
//     return 0;
// }