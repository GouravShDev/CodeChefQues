// Problem Code: COPS
// url : https://www.codechef.com/problems/COPS

#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    int tc, m, x, y, j;
    int safeH;
    int *searchedHouses;
    int *cops;
    scanf("%d", &tc);
    searchedHouses = new int[101]();
    while (tc--)
    {
    
        scanf("%d %d %d", &m, &x, &y);
        cops = new int[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &cops[i]);
        }
        std::sort(cops, cops + m);
        x = x * y;
        int lowLimit = 1, higherLimit;
        int j = 0;
        safeH = 0;
        while (j < m)
        {
            if (lowLimit < cops[j] - x)
            {
                lowLimit = cops[j] - x;
            }
            higherLimit = cops[j] + x;
            for (int i = lowLimit; i <= higherLimit && i <= 100; i++)
            {
                searchedHouses[i]++;
            }
            lowLimit = higherLimit;
            j++;
        }
        for(int i =1; i<101; i++){
            if(searchedHouses[i] == 0) safeH++;
            searchedHouses[i] = 0;
        }
        printf("%d\n" , safeH);
    
    }
    return 0;
}