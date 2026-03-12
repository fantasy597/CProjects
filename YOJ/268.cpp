#include <iostream>
#include <climits>
using namespace std;
int n, s, d, map[55][55] = {0};
int minv = INT_MAX;
int visited[55] = {0};
int bestroute[55] = {0}, route[55] = {0};
int bestlenth = 0;
int counter = 0;
void f(int x, int current, int depth)    //这个depth用来记录递归深度，不会使得route进行覆盖
{
    visited[x] = 1; // 在递归访问之前，立即标记，确保不会在一条路径中重复访问同一个节点。
    route[depth] = x;
    if (x == d)
    {
        counter++;
        if (current < minv)
        {
            minv = current;
            for (int i = 0; i <= depth; i++)
            {
                bestroute[i] = route[i];
            }
            bestlenth = depth;
            visited[x] = 0;
            /*
在所有邻居节点都探索完毕后，即将返回上一层调用之前，必须重置访问标记。这确保了当从一条路径退回
到岔路口时，那些被该路径独占的节点会被“释放”，从而允许下一条路径重新使用这些节点
            */
            return;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 0 && map[x][i] != -1 && current + map[x][i] < minv)
            {
                f(i, current + map[x][i], depth + 1);
            }
        }
        visited[x] = 0;
    }
}
int main()
{
    cin >> n >> s >> d;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> map[j][i];
        }
    }
    f(s, 0, 0);
    if (counter != 0)
    {
        for (int i = 0; i < bestlenth; i++)
        {
            cout << bestroute[i] << "->";
        }
        cout << bestroute[bestlenth];
    }
    else if (counter == 0)
        cout << -1;
    return 0;
}