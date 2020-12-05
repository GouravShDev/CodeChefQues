// Problem Code: SUMTRIAN
// url : https://www.codechef.com/problems/SUMTRIAN

// ***********NOT SOLVED************

#include <iostream>
using namespace std;
int main()
{
    int testCases, n, arrLength, maxSum, currSum, inc, r, j;
    int *arr;
    cin >> testCases;
    while (testCases--)
    {
        cin >> n;
        arrLength = n * (n + 1) / 2;
        arr = new int[arrLength];
        for (int i = 0; i < arrLength; i++)
        {
            cin >> arr[i];
        }
        maxSum = 0;
        r = 1;
        inc = 1;
        if (n == 1 && arr[0] == 1)
        {
            cout << 1;
            continue;
        }
        int i = 0;
        while (i < arrLength - n)
        {
            if (i == inc)
            {
                inc = ((inc + 1) * (inc + 1) + (inc + 1)) / 2;
                r++;
                j = i + r;
                currSum = arr[i] + arr[j] + arr[j + 1];
                if (currSum > maxSum)
                    maxSum = currSum;
            }
            i++;
        }

        cout << maxSum << endl;
    }
}