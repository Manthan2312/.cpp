#include<iostream>

using namespace std;

int main()
{
    int a,i,sum=0;

    cout<<"enter your number"<<endl;

    for ( i = 1; i<=10; i++)
    {
        cin>>a;

        if (a<0)
        {
            break;
        }
       sum=sum+a; 
    }
        cout<<"TOTAL:"<<sum;

        return 0;
    }