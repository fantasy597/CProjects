#include<stdio.h>
int main(){
    long long a,b;
    long long d;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    if(c == '+'){
        d = a + b;
        printf("%lld",d);
    }else if(c == '-'){
        d = a - b;
        printf("%lld",d);
    }else if(c == '*'){
        d = a * b;
        printf("%lld",d);
    }else if(c == '/' && b!=0){
        d = a / b;
        printf("%lld",d);
    }else if(c == '%' && b != 0){
        d == a % b;
        printf("%lld",d);
    }else if(c == '/' && b== 0){
        printf("NO");
    }else if(c == '%' && b== 0){
        printf("NO");
    }
  
    return 0;
}