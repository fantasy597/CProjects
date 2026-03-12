#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int buyN;
    buyN = d / a;
    int cap = buyN;
    int bot = buyN;
    while (cap >= c || bot >= b)
    {
        int n = (cap / c + bot / b);
        buyN += n;
        cap = cap % c;
        bot = bot % b;
        cap += n;
        bot += n;
    }
    cout << buyN;
}