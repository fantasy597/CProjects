#include <iostream>
using namespace std;
struct people
{
    int sno;
    long long zhanli;    //注意战力应该用long long存储
    float tili = 1.0;    //体力要用float
    int shengfuzhi = 0;
    int score = 0;
    int rank = 1;
};
int vs(people x, people y) //x is defensor
{
    if (x.zhanli * x.tili >= y.zhanli * y.tili)
        return 1;
    else
        return 0;          //开始他妈的返回值为-1，你是人啊！！
}
int main()
{
    int n;
    cin >> n;
    people f[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i].sno >> f[i].zhanli;
    }
    int x = 0, y = 1;
    for (int j = 0; j < n - 1; j++)
    {
        if (vs(f[x], f[y]))
        {
            f[x].tili *= 0.75;         //妈的题目开始又没看清
            f[x].shengfuzhi++;
            if (f[y].tili == 1)
            {
                f[x].score += 5;
                if (f[x].shengfuzhi > 1 && f[x].shengfuzhi <= 5)
                {
                    f[x].score += (f[x].shengfuzhi - 1);
                }
                if (f[x].shengfuzhi > 5)
                {
                    f[x].score += 5;
                }
            }
            else
            {
                f[x].score += 5;
                if(f[y].shengfuzhi <= 4)
                f[x].score -= f[y].shengfuzhi;
                else
                f[x].score -= 4;
            }
            y++;               //不要忘记最后y和x的变化
        }
        else
        {
            f[y].tili *= 0.75;
            f[y].shengfuzhi++;
            f[y].score += 5;
            if(f[x].shengfuzhi <= 4)
            f[y].score -= f[x].shengfuzhi;
            else
            f[y].score -= 4;
            int temp = y;
            y++;                               //同上不要忘记最后y和x的变化
            x = temp;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0;j < n - 1 - i;j++)
        {
            if(f[j].score < f[j + 1].score 
            || f[j].score == f[j + 1].score && f[j].shengfuzhi < f[j + 1].shengfuzhi
            || f[j].score == f[j + 1].score && f[j].shengfuzhi == f[j + 1].shengfuzhi && f[j].sno > f[j + 1].sno)
            {
                people temp;
                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
    for(int i = 0;i < n;)
    {
        int counter = 1;
        while(i + counter < n && f[i].score == f[i + counter].score)
        {
            counter++;    
        }
        for(int j = i;j < i + counter;j++)
        {
            cout<<i + 1<<" "<<f[j].sno<<" "<<f[j].score<<endl;
        }
        i+=counter;

    }
    return 0;
}