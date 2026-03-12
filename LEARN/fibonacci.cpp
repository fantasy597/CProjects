#include <iostream>
using namespace std;
long long arr[100] = {0};           //记忆化搜索
long long fibonacci(int x)
{
    if (x == 1 || x == 2)
    {
        arr[x] = 1;
        return arr[x];
    }
    else
    {
    if(arr[x] != 0)
    {
        return arr[x];             
    }else{
        arr[x] = fibonacci(x - 1) + fibonacci(x - 2);
        return arr[x];                 //将已经求出来的数据存在arr中
    }
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}