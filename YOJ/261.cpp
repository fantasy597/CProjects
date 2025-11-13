#include <stdio.h>
#include <stdlib.h>

int power(int x, int y){
    int z = 1;
    for(int p = 1;p <= y;p++){
        z *= x;
        
    }
    return z;
}


int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", power(x, y));
    return 0;

}