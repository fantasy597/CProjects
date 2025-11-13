#include <iostream>
#include<climits>     //要使用INT_MAX的头文件
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[105][105] = {0};
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum[105][105], counter = 0;
    for (int x = 1; x < m + 1; x++)
    {
        for (int y = 1; y < n + 1 ; y++)
        {
            sum[x][y] =arr[x][y] + arr[x - 1][y - 1] + arr[x - 1][y + 1] + arr[x + 1][x + 1] + arr[x + 1][x - 1];
        }
    }
    int min = INT_MAX;
    for(int f = 1;f < m + 1;f++)
    {
        for(int e = 1;e < n + 1;e++)
        {
            min = min > sum[f][e]?sum[f][e]:min;
        }
    }
    cout<<min<<" ";
    for(int i = 1;i < m + 1;i++){
        for(int j = 1;j < n + 1;j++){
            if(sum[i][j] == min){
                counter++;
            }
        }
    }
    cout<<counter<<endl;
        for(int i = m + 1;i >= 0;i--){
        for(int j = m + 1;j >= 0;j--){
            if(sum[i][j] == min){
                cout<<i - 1<<" "<<j - 1<<endl;
            }
        }
    }
    return 0;
}
