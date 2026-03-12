#include <iostream>
using namespace std;
int partition(int ary[], int left, int right)
{
    int i = left, j = right, k = ary[left];
    while (i < j)
    {

        while (ary[j] > k && i < j)
            j--;
        while (ary[i] <= k && i < j)
            i++;
        if (i < j)
        {
            int temp = ary[i];
            ary[i] = ary[j];
            ary[j] = temp;
        }
    }
    ary[left] = ary[j];
    ary[j] = k;
    return i;
}
void quicksort(int ary[], int left, int right)
{
    int i = left, j = right;
    if (i < j)
    {
        int mid = partition(ary, i, j);
        quicksort(ary, i, mid - 1);
        quicksort(ary, mid + 1, j);
    }
}
int main()
{
}