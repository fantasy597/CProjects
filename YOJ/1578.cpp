#include <iostream>  //黑白棋子
#include <string.h>
using namespace std;
int main()
{
    int m, n, lunshu;
    cin >> m >> n;
    cin >> lunshu;
    int arr[25][25] = {0};
    int arr2[25][25];
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> arr[i][j];
            arr2[i][j] = arr[i][j];
        }
    }
    for (int c = 1; c <= lunshu; c++)
    {
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                int counter = 0;
                if (arr[i - 1][j] == 1)
                {
                    counter++;
                }
                if (arr[i + 1][j] == 1)
                {
                    counter++;
                }
                if (arr[i][j - 1] == 1)
                {
                    counter++;
                }
                if (arr[i][j + 1] == 1)
                {
                    counter++;
                }
                if (arr[i][j] == 1)
                {
                    if (counter < 2)
                    {
                        arr2[i][j] = 0;
                    }
                    if (counter == 4)
                    {
                        arr2[i][j] = 0;
                    }
                }
                if (arr[i][j] == 0 && counter == 3)
                {
                    arr2[i][j] = 1;
                }
            }
        }
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                arr[i][j] = arr2[i][j];
            }
        }
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << arr2[i][j] << " ";
            if (j == n)
            {
                cout << endl;
            }
        }
    }
    return 0;
}