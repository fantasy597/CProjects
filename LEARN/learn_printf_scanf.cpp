#include<stdio.h>
int main()
{
    char city[50];
    printf("Enter your city: ");
    scanf("%s", city); // 用户输入将存入city数组，注意数组名本身代表地址，故前面不加&
    printf("%s is a good place",city);
    return 0;
}