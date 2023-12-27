#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"ENTER YOUR FIRST VALUE HERE:";
    cin>>a;
    cout<<"ENTER YOUR SECOND VALUE HERE:";
    cin>>b;

    cout<<"BEFORE SWAPING A VALUE:"<<a<<endl;
    cout<<"BEFORE SWAPING B VALUE:"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"AFTER SWAPING A VALUE:"<<a<<endl;
    cout<<"AFTER SWAPING B VALUE:"<<b<<endl;


    return 0;
}