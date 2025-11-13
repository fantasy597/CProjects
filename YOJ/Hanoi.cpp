#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c)
{

    if (n == 1)
    {
        cout << n << " move from " << a << " to " << c << endl;
    }
    else if (n > 1)
    {
        hanoi(n - 1, a, c, b);
        cout << n << " move from " << a << " to " << c << endl;
        hanoi(n - 1, b, a, c);
    }
}
long long counter(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else if (x > 1)
    {
        return 2 * counter(x - 1) + 1;
    }
}
int main()
{
    int n;
    char a, b, c;
    a = 'a';
    b = 'b';
    c = 'c';
    cin >> n;
    hanoi(n, a, b, c);
    cout << counter(n);
    return 0;
}