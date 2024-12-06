#include<iostream>

using namespace std;


int main() 
{
    int a = 10;
    int b = 20;

    if (a>b)
    {
        cout<<"a is larger than b"<<endl;
    }
    else
    {
        cout<<"b is larger than a"<<endl;
    }
    
    int sum=0;
    for(int i=0;i<=100;i++)
    {
        sum+=i;
    }
    cout<<"sum is "<<sum;

    return 0;
}