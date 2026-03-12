#include<iostream>
using namespace std;
void swap(int *arr,int n)
{
    for(int i = 0,j = n - 1;i <= j;i++,j--)
    {
        int temp = *(arr + i);
        *(arr + i)= *(arr + n - i - 1);
        *(arr + n - i - 1) = temp; 
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    swap(&a[0],5);
    for(int i = 0;i < 5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}