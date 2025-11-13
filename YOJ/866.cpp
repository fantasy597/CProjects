#include<iostream>
#include<iomanip>
using namespace std;
struct info
{
    int id;
    double a;
    double b;
};
int main()
{
    int n,counter = 0;
    cin>>n;
    info r[5000];
    for(int i = 0;i < n;i++){
        cin>>r[i].id>>r[i].a>>r[i].b;
    }
    for(int j = 0;j < n;j++){
        if(r[j].a <= r[j].b){
            cout<<r[j].id<<" ";
            cout<<fixed<<setprecision(2)<<r[j].b - r[j].a<<endl;
            counter++;
        }
    }
    float v;
    v = float(counter) / float(n) * 100; 
    cout<<fixed<<setprecision(2)<<v<<"%";
}