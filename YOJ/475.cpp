#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ary[100] = {0};
    int len1 = 0,len2 = 0;
    for(int i =0;i<100;i++){     //数组的循环他妈的从0开始给我记住了！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
        cin>>ary[i];
    }
    for(int j = 0;j < 100;j++){
        if(ary[j] == -1){         //第j + 1个数字为 -1
            len1 = j;                //第一个序列长度为j
            break;
            j = 99;
        }
    }
    int ary1[len1];
    for(int c = 0;c < len1;c++){
        ary1[c] = ary[c];
    }
     int ary_2[100];
    for(int k = len1 + 1;k < 100;k++){
        ary_2[k - len1 -1] = ary[k];
        if(ary[k] == -1){
            len2 = k - len1 -1;
            break;
            k = 99;
        }
    }
    int ary2[len2];
    for(int n = 0;n < len2;n++){
        ary2[n] = ary_2[n];
    }
    int counter = 0;
    for(int x = 0;x < min(len1,len2);x++){
        if(ary[x] != ary2[x]){
            cout<<int(ary[x] - ary2[x]);
            counter++;
        }
    }
    cout<<len1<<endl<<len2<<endl;
    if(counter == 0){
        if(len1 == len2){
            cout<<0;
        }else if(len1 != len2){
            cout<<"Not Comparable";
        }
    }
    
    return 0;
}