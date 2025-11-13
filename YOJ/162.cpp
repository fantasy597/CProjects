#include<iostream>
#include<string>
using namespace std;
int main(){
    int term = 0,sum = 0,last = 0,count = 0;
    char ISBN[13];
    cin>>ISBN;
    for(int i = 0;i <= 10;i++){
    if(i == 1 || i == 5){
        continue;     
        
    }
    count++;          //开始时count写到if里面了，导致直接被跳过了
    term = ISBN[i] - 48;
    sum += term*count;    
    }
    last = sum % 11;  //last是识别码的数值
    if(last == 10){
        last = int('X');
    }else{
        last += 48 ;
    }
    if(char(last) == ISBN[12]){
        cout<<"Right";
    }else{
        ISBN[12] = char(last);
        cout<<ISBN<<endl;
    }
    return 0;
}