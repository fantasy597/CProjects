#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int n,m,r;
    scanf("%d%d",&n,&m);
    int Class[n];
    char sno[n][100],name[n][10];
    for(int i = 0;i < n;i++){
    scanf("%s%d%s",name[i],&Class[i],sno[i]);         //又忘记取地址符！！！

    }
    for(int j = 0;j < m;j++){
        r = rand() % n;
        printf("lucky guy %s from %d ,number is %s\n",name[r],Class[r],sno[r]);
    }
    return 0;
}