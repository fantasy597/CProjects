#include<stdio.h>
using namespace std;
int main(){
    char str1[105],str2[105];
    gets(str1);      //c++中的gets函数可以读取含有空格的字符串
    gets(str2);
    int m = 0,counter = 0;
    for(int i = 0;i <= 99;i++){
        if(str1[i] != str2[i]){
            m = i;
            counter++;
            printf("%d",(str1[m] - str2[m]));
            break;
        }
    }
    if(counter == 0){
        printf("0");
    }
    return 0;
}