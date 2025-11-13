#include<stdio.h>
int main(){
    int ary[6]{22,34,10,5,89,45},temp;
    for(int i = 0;i < 5;i++){
        for(int j = i + 1;j < 6;j++){
            if(ary[j] < ary[i]){
                temp = ary[j];
                ary[j] = ary[i];
                ary[i] = temp;

            }
        }
    }
    for(int k = 0;k < 6;k++){
    printf("%d ",ary[k]);
}
}