#include <iostream>
using namespace std;
int c = 0;
int move(int n, char start, char assist, char end)
{

    if (n == 1)
    {
        cout << n << " from " << start << " to " << end << endl;
        c++;
    }
    else
    {
        move(n - 1, start, end, assist);
        cout << n << " from " << start << " to " << end << endl;
        c++;
        move(n - 1, assist, start, end);
    }
    return c;
}
int main()
{
    int m;
    cin >> m;
    cout << move(m, 'a', 'b', 'c');
    return 0;
}
