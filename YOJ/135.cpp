#include <iostream>
using namespace std;
struct info
{
    long long sno;
    int birth;
};
info res[100005];          //大容量数组放在主函数外，防止栈溢出
info f[100005];
int Cal(long long x)
{
    int b;
    b = (x % 1000000000000) / 10000;
    return b;
}
void merge(info a[], int low, int mid, int high, info b[])
{
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (a[i].birth > a[j].birth ||
            a[i].birth == a[j].birth && a[i].sno >= a[j].sno ||
            a[i].birth == a[j].birth && a[i].sno == a[j].sno)
            b[k++] = a[i++];
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= high)
    {
        b[k++] = a[j++];
    }
    for (int i = low, k = 0; i <= high; i++) //k = 0
    {
        a[i] = b[k++];
    }
}
void sort(info a[], int low, int high, info b[])
{
    int mid = (low + high) / 2;
    if (low < high)
    {
        sort(a, low, mid, b);
        sort(a, mid + 1, high, b);
        merge(a, low, mid, high, b);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i].sno;
        f[i].birth = Cal(f[i].sno);
    }

    sort(f, 0, n - 1, res);
    for (int o = 0; o < n; o++)
    {
        cout << f[o].sno << endl;
    }
    return 0;
}