#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int len[m], arr[m][1005];        //还是尽量少用动态数组
    for (int i = 0; i < m; i++)
    {
        cin >> len[i];
        for (int j = 0; j < len[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int p = 0; p < m; p++)
    {
        int error = 0;
        for (int y = 0; y < len[p] - 1; y++)
        {

            if (arr[p][y] >= arr[p][y + 1])
            {
                error++;
                break;
            }
        }
        if (error == 0)
        {
            cout << "YES" << endl;
        }
        if (error > 0)
        {
            int b = 0;
            cout << arr[p][0];
            while (b + 1 < len[p] && arr[p][b] < arr[p][b + 1])
            {
                cout << " " << arr[p][b + 1];
                b++;
            }
            cout<<endl;
        }
    }
    return 0;
}
