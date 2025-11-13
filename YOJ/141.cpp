#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int juzhen[105][105] = {0};
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> juzhen[i][j];
        }
    }
    int max = 0;
    int sum[105][105] = {0};
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            sum[i][j] = juzhen[i][j] + juzhen[i - 1][j] + juzhen[i + 1][j] + juzhen[i][j - 1] + juzhen[i][j + 1];
            max = max < sum[i][j] ? sum[i][j] : max;
        }
    }
    int counter = 0;
    for (int e = 1; e < m + 1; e++)
    {
        for (int r = 1; r < n + 1; r++)
        {
            if (sum[e][r] == max)
            {
                counter++;
            }
        }
    }
    cout << max << " " << counter<<endl;
    for (int e = 1; e < m + 1; e++)
    {
        for (int r = 1; r < n + 1; r++)
        {
            if (sum[e][r] == max)
            {
                cout<<e - 1<<" "<<r - 1<<endl;
            }
        }
    }
    return 0;
}