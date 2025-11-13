#include<stdio.h>
int main(){
    int k,n;
    scanf("%d",&k);
    double s = 0;
    n = 1;
    for(int i = 1;s <= k; i++){
        s += 1.0/i;
        n = i;
    }
    printf("%d",n);
    return 0;
    
}
