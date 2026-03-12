#include <iostream>
using namespace std;
int n, m; // n是行数，m是列数
int count_2 = 0, count_land = 0;
int baozang[12][2] = {0};
int map[205][205] = {0}, visited[205][205] = {0};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
void find(int x, int y)
{
    if(visited[x][y] == 1)
    {
        return;
    }
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int p = x + dx[i];
        int q = y + dy[i];
        if(visited[p][q] == 0 && p >= 0 && p < n && q >= 0 && q < m && map[p][q] != 0)
        {
            if(map[p][q] == 2 && visited[p][q] == 0)
            {
                count_land--;
            }
            find(p,q);
        }
    }

}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 2)
            {
                baozang[count_2][0] = i;
                baozang[count_2][1] = j;
                count_2++;
            }
        }
    }
    count_land = count_2;
    for(int i = 0;i < count_2;i++)
    {
        find(baozang[i][0],baozang[i][1]);
    }
    cout<<count_land;

    return 0;
}