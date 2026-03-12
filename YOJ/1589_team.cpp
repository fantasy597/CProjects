#include <iostream>
using namespace std;
struct info
{
    int zhanli;
    float tili;
    int lianshengshu;
    int score;
};
int vs(info x, info y) //x is defenser
{
    if (x.tili * x.zhanli >= y.tili * y.zhanli)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    info a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].zhanli;
        a[i].tili = 1.0;
        a[i].lianshengshu = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j].zhanli < a[j + 1].zhanli)
            {
                info temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int q = 1, p = 0;
    for (int o = 1; o <= n - 1; o++)
    {
        if (vs(a[p], a[q]))
        {
            a[p].lianshengshu++;
            a[p].tili *= 0.75;
            if (a[q].tili == 1)
            {
                a[p].score += 5;
                if (a[p].lianshengshu >= 2 && a[p].lianshengshu <= 6)
                {
                    a[p].score += (a[p].lianshengshu - 1);
                }
                else if (a[p].lianshengshu >= 7)
                {
                    a[p].score += 5;
                }
            }
            else
            {
                if (a[q].lianshengshu <= 4)
                    a[p].score += (5 - a[q].lianshengshu);
                else
                {
                    a[p].score += 1;
                }
            }
            q = o + 1;
        }
        else
        {
            a[q].lianshengshu++;
            a[q].tili *= 0.75;
            if (a[p].tili == 1)
            {
                a[q].score += 5;
                if (a[q].lianshengshu >= 2 && a[q].lianshengshu <= 6)
                {
                    a[q].score += (a[q].lianshengshu - 1);
                }
                else if (a[q].lianshengshu >= 7)
                {
                    a[q].score += 5;
                }
            }
            else
            {
                if (a[p].lianshengshu <= 4)
                    a[q].score += (5 - a[p].lianshengshu);
                else
                {
                    a[q].score += 1;
                }
            }
            p = q;
            q = o + 1;
        }
    }
    int sum = 0;
    for (int y = 0; y < n; y++)
    {
        sum += a[y].score;
    }
    cout << sum;
    return 0;
}