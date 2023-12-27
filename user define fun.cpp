#include<iostream>

int num1,num2,sum;

using namespace std;
void add();
void sub();
void multi();
void div();
void mod();
void squ();
void cub();
void in();
void i();

int main()
{
    char x;
    cout<<"ENTER YOUR OPERATION(+,-,*,/,%,! for square,$ for cube)"<<endl;
    cin>>x;
    switch (x)
    {
    case '+':add();
             break;
    case '-':sub();
             break;
    case '*':multi();
             break;
    case '/':div();
             break;
    case '%':mod();
             break;
    case '!':squ();
             break;
    case '$':cub();
             break;
    default:cout<<"unvalid operation"<<endl;
        break;
    }
return 0;

}
void add()
{
    in();
    sum=num1+num2;
    cout<<"ADDITION:"<<sum<<endl;
}
void sub()
{
    in();
    sum=num1-num2;
    cout<<"SUBTRASTION:"<<sum<<endl;
}
void multi()
{
    in();
    sum=num1*num2;
    cout<<"MULTIPLICATION:"<<sum<<endl;
}
void div()
{
    in();
    sum=num1/num2;
    cout<<"DIVISON:"<<sum<<endl;
}
void mod()
{
    in();
    sum=num1%num2;
    cout<<"MODULO:"<<sum<<endl;
}
void squ()
{
    i();
    sum=num1*num1;
    cout<<"SQUARE:"<<sum<<endl;
}
void cub()
{
    i();
    sum=num1*num1*num1;
    cout<<"CUBE:"<<sum<<endl;
}
void in()
{
    cout<<"ENTER YOUR FIRST NUMBER"<<endl;
    cin>>num1;
    cout<<"ENTER YOUR SECOND NUMBER"<<endl;
    cin>>num2;
}
void i()
{
    cout<<"ENTER YOUR NUMBER"<<endl;
    cin>>num1;
}
