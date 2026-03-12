#include <iostream>
using namespace std;
int num[200] = {0};
int counter = 0;
int prime[200];
int isprime(int x)
{
    if (x == 2)
        return 1;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int cal(int x)
{
    int n = 0;
    for (int i = 0; i < counter - 2; i++)
    {
        if (prime[i] + prime[i + 1] + prime[i + 2] > x)  //注意这里带不带等号！！！
            return n;        //return和break以及continue都要好好想想，这是最小值已经超过x了，所以后面没有再可能的结果了，i++只会更远离x
        if (prime[i] + prime[counter - 2] + prime[counter - 1] < x)
            continue;      //这是第一个选i的最大值，若最大值还不够x，说明当前i的值不够，所以需要直接跳过当前i的循环，i++来接近x
        for (int j = i + 1; j < counter - 1; j++)
        {
            if (prime[i] + prime[j] + prime[j + 1] > x)
                break;
            if (prime[i] + prime[j] + prime[counter - 1] < x)
                continue;
            for (int k = j + 1; k < counter; k++)
            {
                if (prime[i] + prime[j] + prime[k] == x)
                {
                    n++;
                    break;   //当前k已经找到唯一解了
                }
                if(prime[i] + prime[j] + prime[k] > x)
                break;  //已经比x大了，以后只会差的越来越多，直接break
            }
        }
    }
    return n;
}
int main()
{
    for (int i = 2; i <= 1000; i++)
    {
        if (isprime(i))
            prime[counter++] = i;
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << cal(num[i]) << " ";
    }
    return 0;
}