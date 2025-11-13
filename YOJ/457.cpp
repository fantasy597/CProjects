#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n - i;j++){
            printf(" ");
        }
        for(int k = 1;k <= i;k++){
            printf("%c",k + 'A' -1);
        }
        for(int l = i - 1;l >= 1;l--){
            printf("%c",l + 'A' - 1);
        }
        printf("\n");

    }
    return 0;
}