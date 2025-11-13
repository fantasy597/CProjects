#include<stdio.h>
#include<string.h>
const int MAX_SIZE = 100;
int main(){
    char str[MAX_SIZE];
    gets(str);
        puts(strrev(str));
    int len = strlen(str);
    for(int i = 0,j = len - 1;i < j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

    }
    puts(str);

    return 0;
}