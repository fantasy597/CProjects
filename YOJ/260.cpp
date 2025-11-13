#include<iostream>
using namespace std;
int main(){
    int n,m,temp,counter = -1,num,cishu = 0;
    cin>>n>>m;
    int ary[n];
    for(int i = 0;i < n;i++){
        cin>>ary[i];
    }
    for(int k = 0;k < n - 1;k++){
    for(int j = 0;j < n - 1;j++){
        if(ary[j] > ary[j + 1]){
            temp =  ary[j];
            ary[j] = ary[j + 1];
            ary[j + 1] = temp;
        }

    }
}
    int low = 0,high = n - 1,mid;
    while(low <= high){           //这个地方加了个“=”才正确
        mid = (low + high) / 2;
        if(m == ary[mid]){
            num = mid;
            counter++;
            cishu++;                //这个第一次写的时候掉了
            break;
        }
        if(m > ary[mid]){
            low = mid + 1;
        }
        if(m < ary[mid]){
            high = mid - 1;
        }
        cishu++;
    }
    if(counter == -1){
        cout<<counter<<endl;
    }else{
        cout<<mid<<endl;
    }
    cout<<cishu;
    return 0;
}