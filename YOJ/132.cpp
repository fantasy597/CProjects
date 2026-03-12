#include <stdio.h>
#include <stdlib.h>

int findMax(int *p, int nSize)
{
    int max = 0;
    for(int i = 1;i < nSize;i++)
    {
        max = *(p + max) >=  *(p + i) ? max : i; //这个等号不能丢，而且基本上都要带上
    }           
    int temp =*(p + max);
    *(p + max) = *p;
    *p = temp;
    return *p;
}

int main()
{
    int ary[2100] = {3, 2, 1, 5, 6, 7, 9, 10}, n = 8, nMax, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    nMax = findMax(ary, n);

    for (i = 0; i < n; i++)
        printf("%d ", ary[i]);
    printf("\n");

    printf("%d\n", nMax);
    return 0;
}