    #include<iostream>
    using namespace std;
    int main(){
        int n = 0;
        cin>>n;
        int num[n] = {0};
        for(int i = 0;i < n;i++){
            cin>>num[i];
        }
        for(int i = 0;i < n - 1;i++){
            for(int y = 0;y < n - i - 1;y++){
                int temp = 0;
                if(num[y] > num[y + 1]){
                    temp = num[y];
                    num[y] = num[y + 1];
                    num[y + 1] = temp;            //先从小到大排序
                }
            }
        }
        int d = -1;
        for(int y = 0;y < n;){              //注意这个地方咋写的三个循环条件
            int counter = 1;
            while(y + counter < n && num[y] == num[y + counter]){
                counter++;                                  //线性扫描计数
            }
            if(counter != 1){
                cout<<num[y]<<":"<<counter<<endl;
                d++;
            }
            y += counter;                    //相当于for循环的第三个式子
        }
        if(d == -1){
            cout<<"NO";
        }
    return 0;        
    }