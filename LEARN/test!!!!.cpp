#include <iostream>
using namespace std;
int n, s, d;
int map[55][55] = {0}, visited[55] = {0};
int minv = 0;
int bestroute[55] = {0}, route[55] = {0};
int bestlenth;
int counter = 0;
void f(int x, int current,int depth) 
{
            visited[x] = 1;
    route[depth] = x;
    if (x == d)
    {
        counter++;
        if (minv > current)
        {
            minv = current;
            bestlenth = depth + 1;
            for (int i = 0;i <= depth; i++)
            {
                bestroute[i] = route[i];
            }
        }
        visited[x] = 0;
        return;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 0 && map[x][i] != -1 && current + map[x][i] < minv)
            {
                f(i, current + map[x][i],depth + 1);
            }
        }

    }
            visited[x] = 0;
}
int main()
{
    cin >> n >> s >> d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
            if (map[i][j] != -1)
            {
                minv += map[i][j];
            }
        }
    }
    f(s, 0,0);
    // cout<<minv;
    int i = 0;
    for (i = 0;i < bestlenth; i++)
    {
        cout << bestroute[i];
        if(i != bestlenth - 1)
        cout<<"->";
    }
    if(counter == 0)
    cout<<-1;
    return 0;
}
/*
记住DFS中visited数组使用的核心原则：

标记时机：

回溯时机：在所有邻居节点都探索完毕后，即将返回上一层调用之前，必须重
置访问标记。这确保了当从一条路径退回到岔路口时，那些被该路径独占的节点会
被“释放”，从而允许下一条路径重新使用这些节点

*/