#include<iostream>
using namespace std;
int main(){
    int n = 0,a = 0,b = 0,c = 0;
    cin>>n;
    int counter = 0,solution = 0,result;
    struct shit
    {
        int a,b,c;
    };
    struct shit input[n];
    for(int i = 0;i < n;i++){
        cin>>input[i].a>>input[i].b>>input[i].c;
    }
    int changshi;//这是遍历的数字
    
    for(changshi = 0000;changshi <= 9999;changshi++){
        counter = 0;
        for(int m = 0;m < n;m++){
            b = 0;               //b和c要在每次猜测重置为零！！！！！！！
            c = 0;
            //❌错误代码：counter = 0;          //counter也是要重置为零！！，但是不是在这个位置
            if(input[m].a / 1000 == changshi / 1000){
                c++; 
            }
            if((input[m].a / 100) % 10 == (changshi / 100) % 10){
                c++;
            } 
            if((input[m].a / 10) % 10 == (changshi / 10) % 10){
                c++;
            }
            if(input[m].a % 10 == changshi % 10){
                c++;
            }
            if(input[m].a % 10 == changshi / 1000 || input[m].a % 10 == (changshi/ 100) % 10 || input[m].a % 10 == (changshi/ 10) % 10 ||input[m].a % 10 == changshi % 10){
                b++;
            }
             if((input[m].a / 10) % 10 == changshi / 1000 ||(input[m].a / 10) % 10 == (changshi / 100) % 10 || (input[m].a / 10) % 10 == (changshi/ 10) % 10 ||(input[m].a / 10) % 10 == changshi % 10){
                b++;
            }
            if((input[m].a / 100) % 10 == changshi/ 1000 || (input[m].a / 100) % 10== (changshi / 100) % 10 || (input[m].a / 100) % 10 == (changshi / 10) % 10 ||(input[m].a/ 100) % 10 == changshi % 10){
                b++;
            }
             if(input[m].a / 1000 == changshi / 1000 || input[m].a / 1000== (changshi / 100) % 10 || input[m].a / 1000 == (changshi / 10) % 10 ||input[m].a / 1000 == changshi % 10){
                b++;
            }
            if(b == input[m].b && c == input[m].c){
                counter++;
            }
            if(counter == n){
                solution++;
                result = changshi;
            }
        }
    }
    if(solution == 1){
        cout<<result;
    }else{
        cout<<"Not sure";
    }
    return 0;
}