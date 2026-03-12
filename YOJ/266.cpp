#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int num[55][55] = {0}, num2[55][55] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> num[i][j];
        }
    }
    int cmd;
    cin >> cmd;
    while (cmd < 0)
    {
        cmd += 360;
    }
    cmd %= 360;
    cmd /= 90;
    if (cmd == 1)
    {
        for (int p = 0; p < m; p++)
        {
            for (int q = 0; q < n; q++)
            {
                num2[p][q] = num[n - 1 - q][p];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << num2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (cmd == 2)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << num[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (cmd == 3)
    {
        for (int p = 0; p < m; p++)
        {
            for (int q = 0; q < n; q++)
            {
                num2[p][q] = num[q][m - 1 - p];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << num2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << num[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}