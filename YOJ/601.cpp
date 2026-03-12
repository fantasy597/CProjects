#include <iostream>                       //要么统一0_base,要么统一1_base，不要搞成不一样的，容易错
using namespace std;                      // 此题的num就是一个一维数组，就是用来存唯一的那一组解，因为循环模式决定了一定是最小字典序输出，所以找到一个解就全部跳出
int n, sum, num[15] = {0}, avl[15] = {0}; // num是存储排列数的，avl[i]是i有没有被用;
int xishu[15];                            // 是第i个对应的系数
int solution = 0;                         // 控制是否跳出所有函数的遥控器
int jiecheng(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return jiecheng(x - 1) * x;
}
int f(int x, int m)
{
    if (m <= x / 2)
        return jiecheng(x) / (jiecheng(m) * jiecheng(x - m));
    else
        return f(x, x - m);
}
void c(int x, int current)
{
    if (solution != 0) // 开头检查：防止进入不必要的递归分支
        return;
    if (x > n) //!!!!!!!!!!!!x代表目前正在给第x个人分书，所以x == n的时候还是应该进行分书操作，其实这里给每一个人分书的操作是等价的，只不过是最后一次要多一个输出的操作
    {
        if (current == sum)
        {
            solution++;
            return;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++) // i就是待选择的数字
        {

            if (solution != 0)                                // 加了这两行就ac了，就是只要算出一个解的时候就其余的所有函数全部跳出结束
                return;                                       // 中间检查：防止在找到解后继续循环尝试其他数字
            if (avl[i] == 0 && current + xishu[x] * i <= sum) // 这里要带=，因为包括第n次分书的检查
            {
                num[x] = i; // 假如不加solution判断跳出语句，可能在找到解返回到更外层的函数循环中遇到一个仅仅是可用的数值就修改了num的数值，把num改坏了
                avl[i] = -1;
                c(x + 1, current + xishu[x] * i);
                avl[i] = 0;
                if (solution != 0) // 结尾检查：防止回溯后修改已设置的 num 数组元素
                    return;
            }
        }
    }
}
int main()
{
    cin >> n >> sum;
    for (int i = 1; i <= n; i++)
    {
        xishu[i] = f(n - 1, i - 1);
    }
    c(1, 0);
    /*for(int i = 1,j = n;i < j;i++,j--)
    {
        if(num[i] < num[j])
        {
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    }*/
    // 不需要，循环的方式决定它是按照字典序找的
    for (int i = 1; i <= n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}


/*
递归回溯的基本框架：选择→递归→回溯

多层递归的统一控制：使用全局变量协调退出

剪枝条件的精确设置：注意边界包含等于

字典序的自然保证：按顺序尝试数字

解的唯一性保护：找到解后立即停止所有操作
*/