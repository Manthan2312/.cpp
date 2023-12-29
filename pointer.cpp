#include<iostream>
using namespace std;
int main()
{
    int a=23;
    int* b=&a;

    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;

    int** c=&b;

    cout<<b<<endl;
    cout<<**c<<endl;
    cout<<&b<<endl;
    



return 0;
}