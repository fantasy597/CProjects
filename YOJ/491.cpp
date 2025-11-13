#include <iostream>
using namespace std;
int f(int x, int y, int z)
{
    int res;
    res = int((x + y + z) / 3);
    return res;
}
int main()
{
    int m;
    int price[105] = {0};
    int newprice[105] = {0};
    cin >> m;
    for (int i = 1; i < m + 1; i++)
    {
        cin >> price[i];
    }
    int error = 0;
    int counter = 1;
    for (int k = 1; k < m + 1; k++)
    {
        if (price[k] != price[1])
        {
            error++;
            break;
        }
    }

    while (error != 0)
    {
        error = 0;
        for (int j = 2; j < m; j++)
        {
            newprice[j] = f(price[j - 1], price[j], price[j + 1]);
        }
        newprice[1] = int((price[1] + price[2]) / 2);
        newprice[m] = int((price[m - 1] + price[m]) / 2);
        for (int y = 1; y < m + 1; y++)
        {
            price[y] = newprice[y];
        }
        counter++;
        for (int k = 1; k < m + 1; k++)
        {
            if (price[k] != price[1])
            {
                error++;
                break;
            }
        }
    }
    cout << counter;
}