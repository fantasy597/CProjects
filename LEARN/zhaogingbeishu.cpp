#include<iostream>
using namespace std;
int main(){
    int x = 0,y = 0;
    cin>>x>>y;
    int z = (x > y)?x:y;
    int k = (x > y)?y:x;
    int houxuan = z;
    while(houxuan % k != 0){
        houxuan += z;
    } 
    cout<<houxuan<<endl;
    return 0;
}