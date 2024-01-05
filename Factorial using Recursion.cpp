#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n<2)
    {
        return 1;
    }
   return n * factorial(n-1);
}
int main()
{
    int a;
    cout<<"enter your number"<<endl;
    cin>>a; 
   cout<<"a!:"<<factorial(a)<<endl;
return 0;
}