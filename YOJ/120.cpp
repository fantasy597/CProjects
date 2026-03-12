#include <iostream>
using namespace std;
int steps = 0;
int n = 0;         //全局变量一定尽量选一个小众一点的字母
int change(int num[], int L, int R)
{
    if(L == R)return n;
    if (L == R - 1)
    {
        if (num[L] > num[R])
        {
            n++;
            int temp;
            temp = num[L];
            num[L] = num[R];
            num[R] = temp;
            cout << L + 1 << "<->" << R + 1 << ":";
            for (int i = 0; i <= R; i++)
            {
                cout << num[i] << " ";
            }
            cout << endl;
        }
        return n;
    }
    else
    {
        int min = 0;
        for (int j = L; j <= R; j++)
        {
            min = L;                               //
            min = num[min] < num[j] ? min : j;
        }
        if (min != L)
        {
            int temp = num[L];
            num[L] = num[min];
            num[min] = temp;
            n++;
            cout << L + 1 << "<->" << min + 1 << ":";
            for (int i = 0; i <= R; i++)
            {
                cout << num[i] << " ";
            }
            cout << endl;
        }
        return change(num, L + 1, R);
    }
}
int main()
{
    int n, a[105];
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    change(a, 0, n - 1);
    return 0;
}