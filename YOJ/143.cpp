#include <iostream>
using namespace std;
int n, sum, num[15] = {0}, avl[15] = {0}; // num是存储排列数的，avl[i]是i有没有被用;
int xishu[15];                            // 是第i个对应的系数
int solution = 0;
int jiecheng(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return jiecheng(x - 1) * x;
}
int f(int x, int m)
{
    if (m <= x / 2)
        return jiecheng(x) / (jiecheng(m) * jiecheng(x - m));
    else
        return f(x, x - m);
}

void c(int x, int current)
{
    if (solution != 0)
        return;
    if (x > n)
    {
        if (current == sum)
            solution++;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (avl[i] == 0 && current + i <= sum)
            {
                avl[i] = -1;
                num[x] = i;
                c(x + 1, current + xishu[x] * i);
                if(solution != 0)
                return;
                avl[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n >> sum;
    for (int i = 1; i <= n; i++)
    {
        xishu[i] = f(n - 1, i - 1);
    }
    c(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}