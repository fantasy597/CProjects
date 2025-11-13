#include<stdio.h>
int main(){
    int score;
    char grade;
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("90 - 100");
        break;
    case 'B':
        printf("80 - 90");
        break;
    default:
        printf("小于80");
        break;
    }
    return 0;
}
