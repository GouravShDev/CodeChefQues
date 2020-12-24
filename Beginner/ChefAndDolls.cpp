// Problem Code: MISSP
// url : https://www.codechef.com/problems/MISSP

#include <stdio.h>

int main()
{
    int tc, n;
    int *dolls;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d", &n);
        dolls = new int[n];
        int d[100001]= {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &dolls[i]);
            d[dolls[i]]++;
        }
        for (int i = 0; i <= 100000; i++)
        {
            if (d[i] % 2 != 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}