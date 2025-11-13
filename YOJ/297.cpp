#include<iostream>
using namespace std;
int main(){
    int d1,d2;
    char week[7][20]  = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    cin>>d1>>d2;
    if(d1 == 7){
        d1 = 0;
    }
    if(d2 == 1){
        d2 = 8;
    }
    cout<<week[d1]<<endl<<week[d2 - 2]<<endl;
    return 0;
}