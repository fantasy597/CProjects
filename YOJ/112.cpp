#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int bisearch(int ary[], int left, int right, int num)
{
    int mid = (left + right) / 2;
    printf("search %d from %d to %d\n", num, left, right);
    if (left > right)
        return -1;
    if (ary[mid] == num)
    {
        return mid;
    }
    else if (ary[mid] < num)
    {
        left = mid + 1;
        return bisearch(ary, left, right, num);
    }
    else if (ary[mid] > num)
    {
        right = mid - 1;
        return bisearch(ary, left, right, num);
    }
}

int main()
{
    int n, array[10000], i, num;
    scanf("%d", &n);
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("%d", bisearch(array, 0, n - 1, num));
    cout << endl;
    return 0;
}
