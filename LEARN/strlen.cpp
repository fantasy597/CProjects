#include<stdio.h>
#include<string.h>
const  int MAX_SIZE = 100;
int main(){
    char ary[MAX_SIZE];
    int counter = 0;
    gets(ary);
    for(int i = 0;i < MAX_SIZE;i++){
        if(ary[i] != '\0'){
            counter++;
        }else{
            break;
        }
    }
    printf("the length of the string is %d\n",counter);
    printf("the length of the string is %d",strlen(ary));
    return 0;
}
