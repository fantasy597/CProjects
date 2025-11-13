#include<stdio.h>
int main(){
    int d = -1,low,high,mid,x;
    scanf("%d",&x);
    int num[7] = {1,3,5,7,13,73,145};
    low = 0;high = 6;
    while(low < high){
        mid = (low + high) / 2;
        if(num[mid] == x){
            d++;
            break;
        }
        if(num[mid] > x){
            high = mid - 1;
        }
        if(num[mid] < x){
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if (d == -1){
        printf("can't find");
    }else{
        printf("number %d is %d",mid + 1,x);
    }
    return 0;
}
