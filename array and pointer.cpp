#include <iostream>

using namespace std;

int main()
{

    int num[]={33,43,45,7655};
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
     num[2]={334};
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;
    
    int marks[4];
    marks[0]=45;
    marks[1]=75;
    marks[2]=99;
    marks[3]=78;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int* p=num;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    
    int *m=marks;
    cout<<*m<<endl;
    cout<<*(m+1)<<endl;
    cout<<*(m+2)<<endl;
    cout<<*(m+3)<<endl;

    return 0;
}
