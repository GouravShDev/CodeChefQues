// Problem Code: FCTRL2
// url : https://www.codechef.com/problems/FCTRL2

#include <iostream>

using namespace std;

int main()
{
    int testCases;
    int num, x;
    int arr[200] = {1};
    int index = 0;
    int m = 1;
    int i = 2;
    int temp = 0;
    cin >> testCases;
    while (testCases > 0)
    {
        cin >> num;
        m = 1;
        while (i <= num)
        {   
            for (int j = 0; j < m; j++)
            {
                x = arr[index] * i + temp;
                temp = x / 10;
                arr[index++] = x % 10;
                
            }
            while (temp > 0)
            {
                arr[index++] = temp % 10;
                temp= temp / 10;
                m++;
            }
            i++;
            index = 0;
        }
        for(int k = m-1;k >= 0; k--){
            cout<<arr[k];
            arr[k] = 0;
            if(k==0) arr[k] = 1;
        }
        cout<<endl;
        testCases--;
        i = 2;
    }

    return 0;
}