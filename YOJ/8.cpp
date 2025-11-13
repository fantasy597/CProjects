#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if( a>=90 && a<=100){
        printf("4.0");
    }
        else if( a>=86 && a<=89){
        printf("3.7");
    }
        else if(a >= 83&& a<= 85){
        printf("3.3");
    }
        else if(a >= 80&&a <= 82){
        printf("3.0");
    }
        else if(a >= 76&&a <= 79){
        printf("2.7");
    }
        else if(a >= 73&&a <= 75){
        printf("2.3");
    }
        else if(a >= 70&&a <= 72){
        printf("2.0");
    }
        else if(a >= 66&&a <= 69){
        printf("1.7");
    }
        else if(a >= 63&&a <= 65){
        printf("1.3");
    }
        else if(a >= 60&&a <= 62){
        printf("1.0");
    }
        else if(a <= 60){
        printf("0");
    }
    return 0;
       
    
}