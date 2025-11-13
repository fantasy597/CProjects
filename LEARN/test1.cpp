#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int counter = 0;
    for(int q = 0;q < n - 1;q++){
        for(int x = 0;x < n - 1 - q;x++){
            if(arr[x] > arr[x + 1]){
                int temp;
                temp = arr[x + 1];
                arr[x + 1] = arr[x];
                arr[x] = temp;
            }
        }
    }
    for(int y = 0;y < n;){
        counter = 1;
        while(y + counter < n && arr[y] == arr[y + counter]){
            counter++;
        }
        cout<<arr[y]<<" appears "<<counter<<" times"<<endl;
        y += counter;              //忘记了！！！
    }
    return 0;
}