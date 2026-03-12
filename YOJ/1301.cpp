#include<iostream>
using namespace std;


int main()
{
    int A,B;
    int a[40] = {0};
    int b[40] = {0};
    cin>>A>>B;
    int suma = 0,sumb = 0;
    for(int i = 0; i < A;i++)
    {
        cin>>a[i];
        suma += a[i];
    }
    for(int j = 0;j < B;j++)
    {
        cin>>b[j];
        sumb += b[j];
    }
    if(suma <= 21 && sumb <= 21)
    {
        if(suma > sumb)
        cout<<"A wins with "<<suma<<" points";
        else if(suma < sumb)
        cout<<"B wins with "<<sumb<<" points";
        else if(suma == sumb)
        cout<<"Draw with "<<suma<<" and "<<sumb<<" points";
    }
    else
    {
        if(suma > 21 && sumb > 21)
        cout<<"Draw with "<<suma<<" and "<<sumb<<" points";
        else
        {
        if(suma < sumb)
        cout<<"A wins with "<<suma<<" points";
        else if(suma > sumb)
        cout<<"B wins with "<<sumb<<" points";
        }
        
    }
    
    return 0;
}