#include<iostream>
using namespace std;
int main(){
    int sum,a,b,c,d,e;
    cin>>sum;
    for(a = 1;a <= 5;a++){
        for(b = 1;b <= 5;b++){
            if(a != b){
                for(c = 1;c <= 5;c++){
                    if(c != a && c!= b){
                        for(d = 1;d <= 5;d++){
                            if(d != a && d != b && d!= c  ){
                                for(e = 1;e <= 5;e++){
                                    if(e != a && e != b && e != c && e != d && a + 4*b + 6*c + 4*d + e == sum){
                                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
                                        return 0; 
                                    }  
                                }
                            }
                        }
                    }
                }
            }
        }
    }
       
}    