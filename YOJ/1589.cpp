#include <stdio.h>
#include <stdlib.h>

int findMax(int *p, int nSize)
{
#include <iostream>
using namespace std;
struct info
{
    int x;
    int y;
    int lenth;
};

int m, n;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, 1, -1};
int track[105][105];
info f[10000];
int avl[105][105] = {0};
int func(int x, int y, int current)
{
    avl[x][y] = -1;
    current++;
    int i = track[x][y];
    int p = x + dx[i], q = y + dy[i];
    if (p >= 0 && p < m && q >= 0 && q < n && avl[p][q] == 0)
    {
        func(p, q, current + 1);
    }
    avl[x][y] = 0;
    return current;
}
int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> track[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<func(i,j,1)<<" ";
        }
    }
    return 0;
}
}

int main()
{
    int ary[2100] = {3, 2, 1, 5, 6, 7, 9, 10}, n = 8, nMax, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    nMax = findMax(ary, n);

    for (i = 0; i < n; i++)
        printf("%d ", ary[i]);
    printf("\n");

    printf("%d\n", nMax);
    return 0;
}