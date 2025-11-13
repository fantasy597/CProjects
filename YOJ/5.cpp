#include<stdio.h>
int main()
{
    char x,y,z;
    scanf("%c",&x);
    y = x + 32;
    z = x - 32;

    if(x <= 96){
        printf("%c",y);
    }else{
        printf("%c",z);
    }
    return 0;

}