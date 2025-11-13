#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char str[16] = {0};
    cin>>str;
    int len = 0;
    for(len = 0;str[len] != '\0';len++){
        str[len] -= 48;
    }
    int m = 0;
    long long res[400] = {0};
    int d = -1;
    for(int i = 1;i <= len - 3;i++){
        for(int j = 1;j <= len - i - 2;j++){
            for(int k = 1;k <= len - i - j - 1;k++){
                d++;
                m = len - i - j - k;
                for(int q = 0;q < i;q++){
                    res[d] += str[q] * pow(10,i - q - 1);  
                }
                for(int q = i;q < i + j;q++){
                    res[d] += str[q] * pow(10,j - q + i - 1);
                }
                for(int q = i + j;q < i + j + k;q++){
                    res[d] += str[q] * pow(10,k + j - q + i - 1);
                }
                for(int q = i + j + k;q < len;q++){
                    res[d] += str[q] * pow(10,len - q - 1);
                }
            }
        }
    }
    for(int i = 0;i < d;i++){
        for(int j = 0;j < d - i;j++){
            long long temp;
            if(res[j] < res[j + 1]){
                temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i <= d;i++){

        cout<<res[i]<<" ";
    }
    return 0;
}
