#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, d, mini;

    char divide;
    cin >> a >> divide >> b;
    mini = min(a, b);
    for (int i = 2; i <= mini; i++)
    {
        while ((a / i) * i == a && (b / i) * i == b)
        {
            // 用while循环，找到一个因数就往死里除
            a = a / i;
            b = b / i;
        }
    }
    cout << a << '/' << b;
    return 0;
}