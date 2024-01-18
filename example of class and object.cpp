#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string a;
    void check();
    void fun1();

public:
    void read();

    void fun2();
};

void binary::read()
{
    cout << "ENTER YOUR BINARY NUMBER" << endl;
    cin >> a;
}
void binary::check()
{
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            cout << "THIS IS NOT BINARY FORMAT" << endl;
            exit(0);
        }
    }
}
void binary::fun1()
{
    check();
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0')
        {
            a.at(i) = '1';
        }
        else
        {
            a.at(i) = '0';
        }
    }
}
void binary::fun2()
{
    fun1();
    for (size_t i = 0; i < a.length(); i++)
    {
        cout << a.at(i);
    }
}
int main()
{
    binary m;
    m.read();
    m.fun2();
    return 0;
}