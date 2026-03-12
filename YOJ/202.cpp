#include <iostream>
#include <string.h>
using namespace std;
int avl[12] = {0};
int solution = 0;
int take[12] = {0};
int res[5005][12];
int like[12][12];
void assign(int x, int m) // 第x个人，一共n人，m本书
{
    if (x == m)
    {
        for (int i = 0; i < m; i++)
        {
            res[solution][i] = take[i];
        }
        solution++;
    }
    else
    {
        for (int j = 0; j < m; j++)
        {
            if (like[x][j] == 1 && avl[j] == 0)
            {
                take[x] = j;
                avl[j] = -1;
                assign(x + 1, m);
                avl[j] = 0;
            }
            else
                continue;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++)
        {
            like[i][j] = line[j] - '0';
        }
    }
    assign(0, n);
    if(solution != 0)
    cout << solution << endl;
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (int j = 0; j < solution; j++)
    {
        for (int u = 0; u < n; u++)
        {
            cout << "B" << res[j][u] + 1;
        }
        cout << endl;
    }
    return 0;
}