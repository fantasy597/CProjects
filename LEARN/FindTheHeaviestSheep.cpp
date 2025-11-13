#include<stdio.h>
int main(){
    int Bossnumber = 0;
    double weight[10] = {0},biggestweight = 0;
    for(int i = 0;i < 10;i++){
        scanf("%lf",&weight[i]);
        if(weight[i] > biggestweight){
            biggestweight = weight[i];
            Bossnumber = i + 1;
               

        }
    }
    printf("The heaviest sheep's number is %d,whose weight is %lf",Bossnumber,biggestweight);

    return 0;
}   