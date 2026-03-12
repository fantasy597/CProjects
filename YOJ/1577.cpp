#include <iostream> //上下翻转等式
#include <math.h>
using namespace std;
int rot(int x)
{
    int res;
    if (x == 6)
    {
        res = 9;
    }
    if (x == 0)
    {
        res = 0;
    }
    if (x == 1)
    {
        res = 1;
    }
    if (x == 8)
    {
        res = 8;
    }
    if (x == 9)
    {
        res = 6;
    }
    return res;
}
int check(int x)
{
    while (x > 0)
    {
        int temp = x % 10;
        if (temp == 2 || temp == 3 || temp == 4 || temp == 5 || temp == 7)
        {
            return 0;
        }
        x /= 10;
    }
    return 1;
}
int fanzhuan(int x)
{

    int res = 0;
    int temp = x;
    int counter = 0;
    while (temp > 0)
    {
        temp /= 10;
        counter++;
    }
    int i = 1;
    while (x > 0)
    {
        res += rot((x % 10)) * pow(10, counter - i);
        i++;
        x /= 10;
    }
    return res;
}
int main()
{
    int N, counter = 0;
    cin >> N;
    for (int A = 1; A < N; A++)
    {
        if (check(A))
        {
            for (int B = A; B >= A && A + B < N; B++)
            {
                if (check(B))
                {
                    if (check(A + B) && fanzhuan(A) + fanzhuan(B) == fanzhuan(A + B) && A + B < N)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    cout << counter;
}