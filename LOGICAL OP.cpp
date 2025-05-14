#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"ENTER YOUR VALUES"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if ((a>b)&&(a>c))
    {
        cout<<a<<"is big number"<<endl;
    }
    else if((b>a)&&(b>c))
    {
        cout<<b<<"is big number"<<endl;
    }
    else if((a==b)&&(b==c))
    {
        cout<<"all the values are same"<<endl;
    }
    else
    {
        cout<<c<<"is big number"<<endl;
    }

    return 0;

    cout<<"How are you"<<endl;
}