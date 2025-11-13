#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    long long shizi[n][6];        //数据类型一定要防溢出
    int counter1 = 0, counter2 = 0, score1 = 0, score2 = 0;
    long long answer1[n], answer2[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> shizi[i][j];
        }
        cin >> answer1[i] >> answer2[i];
        long long a = shizi[i][0], b = shizi[i][1], c = shizi[i][2];
        long long d = shizi[i][3], e = shizi[i][4], x = shizi[i][5];
        long long result = a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + d * x + e;
        if (answer1[i] == result)
        {
            counter1++;
            if (counter1 <= k)
            {
                score1++;
            }
            if (counter1 > k)
            {
                score1 += (counter1 - k + 1);
            }
        }
        else
        {
            counter1 = 0;
        }
        if (answer2[i] == result)
        {
            counter2++;
            if (counter2 <= k)
            {
                score2++;
            }
            if (counter2 > k)
            {
                score2 += (counter2 - k + 1);
            }
        }
        else
        {
            counter2 = 0;
        }
    }
    cout << score1 << " " << score2;
    return 0;
}