#include <iostream>
using namespace std;
struct info
{
    int start;
    int end;
};
void sort(int a[], int l, int r)
{
    for (int i = 0; i < r - l; i++)
    {
        for (int j = l; j < r; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int num[105] = {0};
    int q;
    info s[105];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> s[i].start;
        cin >> s[i].end;
    }
    for (int j = 0; j < q; j++)
    {
        sort(num, s[j].start, s[j].end);
    }
    for (int y = 0; y < n; y++)
    {
        cout << num[y] << " ";
    }
    return 0;
}