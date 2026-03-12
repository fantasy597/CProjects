#include <iostream>
#include <string>
using namespace std;
int m, n, positions[20]; // positions[i]指第i个加号在第positions[i]的后面，1base
string num;      //strlen只能处理c风格的字符串char[]
int maxv = 0;
int cal(int positions[])   //这是用来算根据positions数组分配加号的和
{
    int sum = 0;
    for (int i = 1; i <= m + 1; i++)      
    {
        if (i == 1)
        {
            int numm = 0;
            for (int j = 1; j <= positions[1]; j++)
            {
                numm = numm * 10 + int(num[j - 1] - '0');    //这种将 按字符存的数的数组 转化为 数值的操作要熟悉，从前面开始遍历
            }
            sum += numm;    //留意sum+=的位置
        }
        else if (i > 1 && i < m + 1)
        {
            int numm = 0;
            for (int j = positions[i - 1] + 1; j <= positions[i]; j++)   //for第一个语句的 + 1容易忘记
            {
                numm = numm * 10 + int(num[j - 1] - '0');
            }
            sum += numm;
        }
        else
        {
            int numm = 0;
            for (int j = positions[m] + 1; j <= n; j++)
            {
                numm = numm * 10 + int(num[j - 1] - '0');
            }
            sum += numm;
        }
    }
    return sum;
}
void dfs(int positions[], int k, int start) // 给第k个加号分位置，从start位置开始搜寻，把start作为参数
{
    if (k > m)
    {
        maxv = maxv > cal(positions) ? maxv : cal(positions);
    }
    else
    {
        for (int i = start; i <= n - 1; i++)
        {
            positions[k] = i;
            if (m - k > n - 1 - i)    //剪枝，加号剩下位置不够直接return，之后的肯定更不够
                return;
            dfs(positions, k + 1, i + 1);   //给第 k + 1个加号分位置，从i + 1处start
        }
    }
}
int main()
{
    cin >> m; // m个加号
    cin >> num;
    n = num.size();  //这是c++风格的字符串string的长度的函数.size()
    dfs(positions,1,1);
    cout<<maxv;
}