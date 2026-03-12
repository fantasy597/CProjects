#include <iostream>
using namespace std;
int n, m;
int f[11][11];
int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};
int res[11][11] = {0};
int avl[11][11] = {0};
int xxxx(int x, int y)
{
    if (x == n - 1 && y == m - 1)
    {
        return 1;
    }
    avl[x][y] = -1;
    for (int j = 0; j < 4; j++)
    {
        int p = x + dx[j], q = y + dy[j];
        if (p >= 0 && p < n && q >= 0 && q < m && f[p][q] == 1 && avl[p][q] == 0)
        {
            if(xxxx(p, q))
            return 1;
        }
    }
    avl[x][y]  = 0;
    return 0;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> f[i][j];
        }
    }
    if (xxxx(0, 0))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}