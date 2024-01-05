#include<iostream>

using namespace std;

int main()
{
    int a,sum=1,i;
    cout<<"enter your number"<<endl;
    cin>>a; 
    for ( i = 1; i <=a; i++)
    {
        sum=i*sum;
        if(a<2)
        {
            return 1;
        }
    }
    cout<<a<<"!="<<sum<<endl;
 
return 0;
}