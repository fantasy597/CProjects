#include<stdio.h>
long long calculate(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 2 * (calculate(n - 1) + 1);
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    if(n >= 1 && n <= 32)
    {
        printf("%lld",calculate(n));
    }
    else
    {
        printf("Invalid number");
    }
    return 0;
}