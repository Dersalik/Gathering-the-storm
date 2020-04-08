#include<iostream>
using namespace std;

void t1();

int main()
{
    t1();
    t1();
    return 0;
}

void t1()
{
    static int x=1;
    int y=1;
    y++;
    x++;
    cout<<"the value for x is "<<x<<endl;
    cout<<"the value for y is "<<y<<endl;
}

