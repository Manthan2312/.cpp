#include<iostream>

using namespace std;

int main()
{
    float a=56.54;
    float & b=a;
    float x=12.23;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    cout<<"typecasting:"<<int(a)<<endl;
    cout<<"typecasting:"<<(int)a<<endl;

    cout<<"THE:"<<sizeof(12.23)<<endl;
    cout<<"THE:"<<sizeof(12.23l)<<endl;
    cout<<"THE:"<<sizeof(12.23L)<<endl;
    cout<<"THE:"<<sizeof(12.23f)<<endl;
    cout<<"THE:"<<sizeof(12.23F)<<endl;
    
    return 0;

}